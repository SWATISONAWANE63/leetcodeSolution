class Solution {
public:
bool isZero(int n){
            while(n>0){
             if(n%10==0) return true;
             n/=10;
            }
            return false;
        }
    vector<int> getNoZeroIntegers(int n) { 
        int a,b;
        for(int i=1; i<n;i++){
            a=i;
            b=n-i;
            if(!isZero(a)&&!isZero(b)){
            return{a,b};
            }
        }
        return{};
    }
};