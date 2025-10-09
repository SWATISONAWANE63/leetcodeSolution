class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int m=nums.size();
        int n=2*nums.size();
        vector<int>ans;
        for(int i=0; i<n;i++){
            ans.push_back(nums[i%m]);
        }
        return ans;
    }
};