class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>re;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==val){
                continue;
            }else{
               re.push_back(nums[i]);
            }
        }
        nums=re;
        return re.size();
    }
};