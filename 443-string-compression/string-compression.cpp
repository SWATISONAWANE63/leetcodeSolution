class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int index=0;
        int n=chars.size();
        while(i<n){
            char curr_char=chars[i];
            int count=0;
            while(i<n && curr_char==chars[i]){
                count++;
                i++;
            }
            chars[index]=curr_char;
            index++;
            if(count>1){
                string count_st=to_string(count);
                for(char &ch: count_st){
                    chars[index]=ch;
                    index++;
                }
            }
        }
        return index;
    }
};