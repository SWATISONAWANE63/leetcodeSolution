class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v1,v2;
        stringstream ss1(version1);
        string num;
        while(getline(ss1,num,'.')){
            v1.push_back(stoi(num));
        }
        stringstream ss2(version2);
        while(getline(ss2,num,'.')){
            v2.push_back(stoi(num));
        }
        int n=max(v1.size(),v2.size());
        for(int i=0; i<n;i++){
            int a=(i<v1.size())? v1[i]:0;
            int b=(i<v2.size())? v2[i]:0;
            if(a>b) return 1;
            if(a<b) return -1;
            

        }
        return 0;
    }
};