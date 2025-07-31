class Solution {
public:
    int strStr(string haystack, string needle) {
        int NOT_FOUND=-1;
        int pos = haystack.find(needle);
        if (pos != NOT_FOUND) {
            return pos;
        }
        return -1;
    }
};
