class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>s;
        int sum=0;
        int maxN=INT_MIN;
        for(int &num : nums){
            if(num<=0){
                maxN=max(maxN,num);
            }else if(!s.count(num)){
                sum+=num;
                s.insert(num);
            }
        }
       return sum==0 ? maxN:sum;        
    }
};