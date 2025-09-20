#include <bits/stdc++.h>
using namespace std;

class Router {
public:
    int MAX_SIZE;
    unordered_map<string, vector<int>> packetStore;
    unordered_map<int, vector<int>> destTimeMap;
    queue<string> que;

    Router(int memoryLimit) : MAX_SIZE(memoryLimit) {}

    string makeKey(int S, int D, int T) {
        return to_string(S) + "_" + to_string(D) + "_" + to_string(T);
    }

    bool addPacket(int source, int destination, int timestamp) {
        string key = makeKey(source, destination, timestamp);

        if (packetStore.count(key)) {
            return false; // duplicate
        }

        if ((int)que.size() >= MAX_SIZE) {
            forwardPacket();
        }

        packetStore[key] = {source, destination, timestamp};
        que.push(key);

        // Assuming timestamps always arrive sorted (increasing order)
        destTimeMap[destination].push_back(timestamp);

        return true;
    }
    
    vector<int> forwardPacket() {
        if (packetStore.empty()) return {};

        string key = que.front();
        que.pop();

        vector<int> packet = packetStore[key];
        packetStore.erase(key);

        int D = packet[1];
        if (!destTimeMap[D].empty()) {
            destTimeMap[D].erase(destTimeMap[D].begin());
        }

        return packet;
    }
    
    int getCount(int destination, int startTime, int endTime) {
        auto it = destTimeMap.find(destination);
        if (it == destTimeMap.end() || it->second.empty()) return 0;

        const vector<int>& timeStamps = it->second;

        int i = lower_bound(timeStamps.begin(), timeStamps.end(), startTime) - timeStamps.begin();
        int j = upper_bound(timeStamps.begin(), timeStamps.end(), endTime) - timeStamps.begin();

        return j - i;
    }
};
