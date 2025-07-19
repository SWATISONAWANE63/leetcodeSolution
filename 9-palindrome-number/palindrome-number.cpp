class Solution {
public:
    bool isPalindrome(int x) {
      string str=to_string(x);
       int s=0;
       int e=str.size()-1;
       if(x<0){
        return false;
       }
        while(s<e){
            if(str[s]!=str[e]){
                return false;
            }
                s++;
                e--;
        
            

        }
      return true;
    }
};