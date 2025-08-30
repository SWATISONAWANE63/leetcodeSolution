class Solution {
public:
bool insertIfValid(unordered_set<char>& seen, char val) {
    if (val != '.') {
        if (seen.count(val)) return false; // duplicate found
        seen.insert(val);
    }
    return true; // safe
}

    bool isValidSudoku(vector<vector<char>>& board) {
       
        int n=board.size();
        for(int i=0; i<n;i++){
            unordered_set<char>seen;
            for(int j=0; j<n;j++){
                if (!insertIfValid(seen, board[i][j])) return false;
            }
        }
        for(int j=0; j<9; j++){
            unordered_set<char>seen;
            for(int i=0; i<9;i++){
               if (!insertIfValid(seen, board[i][j])) return false;

            }
        }
        for(int rowStart=0; rowStart<9; rowStart+=3){
            for(int colStart=0; colStart<9; colStart+=3){
                unordered_set<char>seen;
                for(int i=rowStart; i<rowStart+3;i++){
                    for(int j=colStart; j<colStart+3; j++){
                        if (!insertIfValid(seen, board[i][j])) return false;

                    }
                }
            }
        }
        return true;
    }
};