class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>count1;
        unordered_map<char,int>count2;
        for(int i:s){
            count1[i]++;
        }
        for(int i:t){
            count2[i]++;
        }
        if(count1.size()!=count2.size()) return false;
       
        for(auto pair:count1){
            char key=pair.first;
            int val=pair.second;
           if(count2.find(key)==count2.end() || count2[key]!=val){
                return false;
            }
        }
        return true;
    }
};