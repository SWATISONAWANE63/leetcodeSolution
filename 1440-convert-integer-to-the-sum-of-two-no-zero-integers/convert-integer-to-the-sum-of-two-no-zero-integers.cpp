class Solution {
public:
    bool hasZero(int num) {
        while (num > 0) {
            if (num % 10 == 0) return true;
            num /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        int a, b;
        for (int i = 1; i < n; i++) {
            a = i;
            b = n - i;
            if (!hasZero(a) && !hasZero(b)) {
                return {a, b};
            }
        }
        return {}; // fallback, though problem guarantees a solution
    }
};
