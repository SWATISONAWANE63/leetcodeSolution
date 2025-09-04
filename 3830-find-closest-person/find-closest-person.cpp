class Solution {
public:
    int findClosest(int x, int y, int z) {
        
       int  cnt=abs(x-z); 
        int cnt1=abs(y-z);
        if(cnt==cnt1)return 0;
        if(cnt<cnt1)return 1;
        else return 2;
        
        
    }
};