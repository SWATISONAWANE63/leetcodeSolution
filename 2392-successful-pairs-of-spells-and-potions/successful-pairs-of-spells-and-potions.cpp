class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int m=potions.size();
        vector<int>result;
        for(int spell: spells){
            long long re=(success+spell-1)/spell;
            int idx=lower_bound(potions.begin(),potions.end(),re)-potions.begin();
            result.push_back(m-idx);
        }
        return result;
    }
};