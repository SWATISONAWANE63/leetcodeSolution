class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end());
            return  ans= nums[nums.size()-k];
        
     
    }
};