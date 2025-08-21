class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        // Step 1: Build height matrix
        vector<vector<int>> height(n, vector<int>(m, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 0) height[i][j] = 0;
                else height[i][j] = (i == 0 ? 1 : height[i-1][j] + 1);
            }
        }
        
        int ans = 0;
        
        // Step 2: For each row, calculate contribution
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int minHeight = height[i][j];
                for(int k=j; k>=0 && minHeight>0; k--){
                    minHeight = min(minHeight, height[i][k]);
                    ans += minHeight;
                }
            }
        }
        
        return ans;
    }
};
