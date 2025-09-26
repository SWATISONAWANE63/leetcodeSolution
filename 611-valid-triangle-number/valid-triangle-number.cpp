class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=0; i<n-1;i++){
            for(int j=i+1; j<n;j++){
                int s=j+1;
                int e=n-1;
              int  k=j;
                while(s<=e){
                int mid=(s+e)/2;
                if(nums[i]+nums[j]>nums[mid]){
                    k=mid;
                     s=mid+1;
                }else{
                    e=mid-1;
                }
            }
            
            count+=(k-j);
        }
    }
    return count;
    }
};