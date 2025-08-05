class Solution {
public:
    int subtractProductAndSum(int n) {
        string s=to_string(n);
        int product=1;
        int sum=0;
        int i=0;
       for(int i=0; i<s.size();i++){
            sum+=s[i]-'0';
           
        }
       for(int i=0; i<s.size();i++){
            product*=s[i]-'0';
           
        }
        int ans=product-sum;
        return ans;

        
    }
};