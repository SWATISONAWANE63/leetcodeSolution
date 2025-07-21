class Solution {
public:
    string makeFancyString(string s) {
        string str;
       
        for(int i=0; i<s.size(); i++){
             int n=str.size();
            if(n>=2 && str[n-1]==s[i] && str[n-2]==s[i]){
                continue;
            }
           str+=s[i];

        }
       
        return str;
        
    }
};