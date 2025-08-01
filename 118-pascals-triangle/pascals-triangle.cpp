class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>re(numRows);
        for(int i=0; i<numRows;i++){
            re[i]=vector<int>(i+1,1);
            for(int j=1; j<i;j++){
                re[i][j]=re[i-1][j]+re[i-1][j-1];
            }
        }
        return re;
        
    }
};