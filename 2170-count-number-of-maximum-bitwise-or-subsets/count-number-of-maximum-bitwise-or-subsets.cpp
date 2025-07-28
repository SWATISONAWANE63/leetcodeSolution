class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr=0;
        for(int num:nums){
            maxOr|=num;
        }
        return backtrack(nums,maxOr,0,0);
    }
    private:
    int backtrack(vector<int>&nums, int maxOr,int index,int currOr){
        if(index==nums.size()){
            return currOr==maxOr ? 1:0;
        }
        if(currOr==maxOr){
            return 1<<(nums.size()-index);
        }
        return backtrack(nums,maxOr,index+1, currOr | nums[index])+backtrack(nums,maxOr,index+1,currOr);
    }
};