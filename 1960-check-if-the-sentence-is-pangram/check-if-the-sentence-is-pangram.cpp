class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int>fre;
        for(char ch:sentence){
            fre[ch]++;
        }
        for(char ch='a'; ch<='z';ch++){
            if(fre[ch]==0)return false;
          
        }    
    return true;
    } 
};