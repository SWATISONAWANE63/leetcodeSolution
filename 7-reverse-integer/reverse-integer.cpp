
class Solution {
public:
    int reverse(int x) {
        long rev = 0; // Use long to handle potential overflow
        while (x != 0) {
            int digit = x % 10; // Get the last digit
            rev = rev * 10 + digit; // Shift rev and append the digit
            x /= 10; // Remove the last digit from x
            
            // Check for overflow/underflow
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0; // Return 0 if overflow occurs
            }
        }
        // return static_cast<int>(rev); // Return the reversed integer
        return rev;
    }
};