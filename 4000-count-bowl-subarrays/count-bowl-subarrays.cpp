class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        stack<int> st;
        long long res=0;
        for(int i=0; i<nums.size(); i++){
            if(st.empty()){
                st.push(nums[i]);
            }
            else{
                if(nums[i]>st.top()){
                    int t=st.top();
                    st.pop();
                    if(st.empty()){
                        st.push(nums[i]);
                        continue;
                    }
                    else{
                        res+=1;
                        while(!st.empty() && st.top()<nums[i]){
                            st.pop();
                            res++;
                        }
                        if(st.empty()){
                            res--;
                        }
                        st.push(nums[i]);
                    }
                }
                else{
                    st.push(nums[i]);
                }
            }
        }
        return res;
    }
};