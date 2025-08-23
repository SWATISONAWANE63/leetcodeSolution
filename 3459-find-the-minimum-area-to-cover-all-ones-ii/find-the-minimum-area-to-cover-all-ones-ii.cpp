class Solution {
public:
    int minArea(vector<vector<int>>& grid, int r1, int r2, int c1, int c2) {
        int minRow = INT_MAX, maxRow = INT_MIN;
        int minCol = INT_MAX, maxCol = INT_MIN;
        bool hasOne = false;

        for (int i = r1; i <= r2; ++i) {
            for (int j = c1; j <= c2; ++j) {
                if (grid[i][j] == 1) {
                    hasOne = true;
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }

        return hasOne ? (maxRow - minRow + 1) * (maxCol - minCol + 1) : 0;
    }

    int minimumSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = INT_MAX;

        // Horizontal splits
        for (int i1 = 0; i1 < m - 1; ++i1) {
            for (int i2 = i1 + 1; i2 < m - 1; ++i2) {
                int a = minArea(grid, 0, i1, 0, n - 1);
                int b = minArea(grid, i1 + 1, i2, 0, n - 1);
                int c = minArea(grid, i2 + 1, m - 1, 0, n - 1);
                ans = min(ans, a + b + c);
            }
        }

        // Vertical splits
        for (int j1 = 0; j1 < n - 1; ++j1) {
            for (int j2 = j1 + 1; j2 < n - 1; ++j2) {
                int a = minArea(grid, 0, m - 1, 0, j1);
                int b = minArea(grid, 0, m - 1, j1 + 1, j2);
                int c = minArea(grid, 0, m - 1, j2 + 1, n - 1);
                ans = min(ans, a + b + c);
            }
        }

        // Mixed splits: horizontal then vertical
        for (int i = 0; i < m - 1; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                int a = minArea(grid, 0, i, 0, j);
                int b = minArea(grid, 0, i, j + 1, n - 1);
                int c = minArea(grid, i + 1, m - 1, 0, n - 1);
                ans = min(ans, a + b + c);

                a = minArea(grid, 0, i, 0, n - 1);
                b = minArea(grid, i + 1, m - 1, 0, j);
                c = minArea(grid, i + 1, m - 1, j + 1, n - 1);
                ans = min(ans, a + b + c);
            }
        }

        // Mixed splits: vertical then horizontal
        for (int j = 0; j < n - 1; ++j) {
            for (int i = 0; i < m - 1; ++i) {
                int a = minArea(grid, 0, i, 0, j);
                int b = minArea(grid, i + 1, m - 1, 0, j);
                int c = minArea(grid, 0, m - 1, j + 1, n - 1);
                ans = min(ans, a + b + c);

                a = minArea(grid, 0, m - 1, 0, j);
                b = minArea(grid, 0, i, j + 1, n - 1);
                c = minArea(grid, i + 1, m - 1, j + 1, n - 1);
                ans = min(ans, a + b + c);
            }
        }

        return ans;
    }
};
