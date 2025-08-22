class Solution {
public:
    int reverse(int x) {
        string st=to_string(x);
        int n=st.size();
        int s=0;
        int e=n-1;
        if (st[0] == '-') s = 1;
        while(s<=e){
            swap(st[s],st[e]);
            s++;
            e--;
        }
        long long ans=stoll(st);
        if (ans < INT_MIN || ans > INT_MAX) return 0;
        return static_cast<int>(ans);
    }
};