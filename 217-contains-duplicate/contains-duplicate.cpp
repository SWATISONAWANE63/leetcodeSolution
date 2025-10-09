class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>fre;
        for(int i:nums){
            fre[i]++;
        }
        for(auto pair: fre){
           if(pair.second>=2){
            return true;
           }
        }
      
        return false;
    }
};