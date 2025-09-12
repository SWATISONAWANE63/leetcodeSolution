class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();

        // Step 1: Sort each row
        for (int i = 0; i < m; ++i) {
            sort(nums[i].begin(), nums[i].end());
        }

        int score = 0;

        // Step 2: For each column, take the max across all rows
        for (int j = 0; j < n; ++j) {
            int maxVal = 0;
            for (int i = 0; i < m; ++i) {
                maxVal = max(maxVal, nums[i][j]);
            }
            score += maxVal;
        }

        return score;
    }
};
