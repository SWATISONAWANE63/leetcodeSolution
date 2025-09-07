class Solution {
public:
    int minOperations(string s) {
        unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }

    int operations = 0;

    while (freq.size() != 1 || freq.count('a') == 0) {
        unordered_map<char, int> nextFreq;
        for (auto& [ch, count] : freq) {
            if (ch == 'a') {
                nextFreq[ch] += count;
            } else {
                char nextChar = (ch == 'z') ? 'a' : ch + 1;
                nextFreq[nextChar] += count;
            }
        }
        freq = nextFreq;
        operations++;
    }

    return operations;
    }
};