class Solution {
public:
    string largestGoodInteger(string num) {
        char maxDigit = '\0'; // store largest digit seen in triplet

        for (int i = 0; i + 2 < num.size(); i++) {
            if (num[i] == num[i+1] && num[i] == num[i+2]) { // triplet check
                if (maxDigit == '\0' || num[i] > maxDigit) {
                    maxDigit = num[i];
                }
            }
        }

        if (maxDigit == '\0') return ""; // no triplet found

        // return the triplet as string
        return string(3, maxDigit);
    }
};