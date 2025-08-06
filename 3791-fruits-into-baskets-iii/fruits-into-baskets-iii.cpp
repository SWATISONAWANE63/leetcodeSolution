class Solution {
public:
    vector<int> st;
    void build(vector<int>& baskets, int x, int lx, int rx){
        if(rx - lx == 1){
            st[x] = baskets[lx];
            return;
        }
        int mid = (lx + rx) / 2;
        build(baskets, 2*x+1, lx, mid);
        build(baskets, 2*x+2, mid, rx);
        st[x] = max(st[2*x+1], st[2*x+2]);
    }
    int find(int k, int x, int lx, int rx){
        if(st[x] < k) return -1;
        if(rx - lx == 1){
            st[x] = -1;
            return lx;
        }
        int mid = (lx + rx) / 2;
        int ans;
        if(st[2*x+1] >= k){
            ans = find(k, 2*x+1, lx, mid);
        } else {
            ans = find(k, 2*x+2, mid, rx);
        }
        st[x] = max(st[2*x+1], st[2*x+2]);
        return ans;
    }
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        st.resize(4*n, 0);
        build(baskets, 0, 0, n);
        int ans = 0;
        for(int fruit: fruits){
            if(find(fruit, 0, 0, n) == -1) ans++;
        }
        return ans;
    }
};