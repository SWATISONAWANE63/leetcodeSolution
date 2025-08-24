class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        vector<int>even;
        vector<int>odd;
        for(int i=1; i<=n; i++){
          
                even.push_back(2*i);
                odd.push_back(2*i-1);
            }
        
        int sumeven=0;
        for(int i=0; i<even.size();i++){
            sumeven+=even[i];
        }
      
        int sumodd=0;
        for(int i=0; i<odd.size();i++){
            sumodd+=odd[i];
        }
        return __gcd(sumeven, sumodd);
    }
};