class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sumNums=0;
        for(int i=0; i<n; i++){
            sumNums+=nums[i];

        }
        long long total = (long long)n * (n + 1) / 2;
        int ans=total-sumNums;
       return ans; 
    }
};