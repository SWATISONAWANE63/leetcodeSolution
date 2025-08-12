class Solution {
public:
    const int MOD = 1000000007; // 1e9 + 7 for modulo
    
    int numberOfWays(int n, int x) {
        // Step 1: Generate all powers <= n
        vector<int> powers;
        for (int base = 1; ; base++) {
            long long val = pow(base, x); // base^x
            if (val > n) break;           // stop when exceeding n
            powers.push_back((int)val);
        }
        
        // Memo table: dp[index][target]
        vector<vector<int>> dp(powers.size(), vector<int>(n + 1, -1));
        
        // Step 2: Call recursion with memo
        return ways(0, n, powers, dp);
    }

private:
    int ways(int idx, int target, vector<int> &powers, vector<vector<int>> &dp) {
        // Base case: exact sum found
        if (target == 0) return 1;
        // Base case: no powers left or sum exceeded
        if (idx >= powers.size() || target < 0) return 0;
        
        // Memoization check
        if (dp[idx][target] != -1) return dp[idx][target];
        
        // Option 1: Pick current power
        int pick = ways(idx + 1, target - powers[idx], powers, dp);
        // Option 2: Skip current power
        int skip = ways(idx + 1, target, powers, dp);
        
        // Store and return result modulo MOD
        return dp[idx][target] = ( (long long)pick + skip ) % MOD;
    }
};
