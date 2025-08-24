class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeroCount=0, maxlength=0;
        int i=0;
        for(int j=0; j<nums.size();j++){
            if(nums[j]==0) zeroCount++;
            while(zeroCount>1){
                if(nums[i]==0){
                    zeroCount--;
              
                }
                  i++;
            }
            maxlength=max(maxlength,j-i);

        }
        return maxlength;
    }
};