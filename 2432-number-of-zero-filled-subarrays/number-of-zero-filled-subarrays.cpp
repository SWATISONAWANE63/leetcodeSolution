class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long re=0;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==0){
               
                cnt++;
                re+=cnt;
            }else {
                cnt=0;

            }

        }
        return re;
    }
};