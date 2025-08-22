
class Solution {
public:
int t[101];
int slove(vector<int>&nums, int i, int n){
    if(i>=n) return 0;
    if(t[i]!=-1) return t[i];
    int steal=nums[i]+slove(nums,i+2,n);
    int skip=slove(nums,i+1,n);
    return t[i]=max(steal,skip);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        memset(t,-1,sizeof(t));
        return slove (nums,0,n);
    }
};