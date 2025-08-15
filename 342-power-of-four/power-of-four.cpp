class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        // Check power of 2
        if ((n & (n - 1)) != 0) return false;
        // Check if set bit is in even position
        return (n & 0xAAAAAAAA) == 0;
    }
};
