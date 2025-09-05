class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for(int i=1; i<=60; i++){
            long long s=(long long)num1-(long long)i*num2;
            if(s<0) continue;
            if(s<i)continue;
            int ones=__builtin_popcountll(s);
            if(ones<=i) return  i;
        }
        return -1;
        
    }
};