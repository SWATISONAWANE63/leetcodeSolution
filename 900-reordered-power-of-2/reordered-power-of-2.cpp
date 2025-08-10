class Solution {
public:
bool isPowerOfTwo(long long num) {
    return num > 0 && (num & (num - 1)) == 0;
}
bool reorderedPowerOf2(int n) {
         string s = to_string(n);
    sort(s.begin(), s.end());

    do {
        if (s[0] == '0') continue; // skip leading zero
        long long val = stoll(s);
        if (isPowerOfTwo(val)) return true;
    } while (next_permutation(s.begin(), s.end()));

    return false;
        
    }
};