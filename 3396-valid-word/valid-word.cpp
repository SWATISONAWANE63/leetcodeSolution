class Solution {
public:
    bool isValid(string word) {
        bool vowel=false;
        bool Consonant=false;
        if(word.size()<3) return false;
       for(int i=0; i<word.size(); i++){
        if(!isalnum(word[i])) return false;
        if(isalpha(word[i])){
            char lower=tolower(word[i]);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
              vowel= true;

        }else{
            Consonant =true;
        }
       }
       }
       
         return vowel && Consonant ;
       }
    
};