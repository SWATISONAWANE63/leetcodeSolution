class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
    vector<vector<int>>dp(k,vector<int>(k,0));
        int maxlen=0;
        for(int i=0; i<nums.size(); i++){
            int currMod=nums[i]%k;
            for(int preMod=0;preMod<k; preMod++){
                dp[preMod][currMod]=dp[currMod][preMod]+1;
                maxlen=max(maxlen,dp[preMod][currMod]);
            }

        }
        return maxlen;


    }
};