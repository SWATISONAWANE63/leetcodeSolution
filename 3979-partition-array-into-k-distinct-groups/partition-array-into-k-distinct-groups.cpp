class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0) return false;
        int totalcount=n/k;
        unordered_map<int,int>freMap;
        for(int val:nums){
            freMap[val]++;
        }
        for(auto& [key, count]:freMap){
            if(count>totalcount){
                return false;
            }
        }
        return true;
    }
};