class Solution {
public:
    bool isPalindrome(string s) {
        string final="";
        if(s==" ") return true;
        for(char ch:s){
        if(isalnum(ch)) {  
        final += tolower(ch);
           }
        }

       
         int st=0; 
         int en=final.size()-1;
         while(st<en){
            if(final[st]!=final[en]){
                return false;
               
            }
             st++;
            en--;
         }
         return true;
    }
};