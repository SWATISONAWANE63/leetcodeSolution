class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        //for checking rows
        for(int i=0; i<n;i++){
            unordered_set<char>seen;
            for(int j=0; j<n;j++){
                char val=board[i][j];
                if(val!='.'){
                    if(seen.count(val)){
                        return false;
                    }
                    seen.insert(val);
                }            
            }
        }
        //for checking col
        for(int j=0; j<9; j++){
            unordered_set<char>seen;
            for(int i=0; i<9;i++){
                char val =board[i][j];
                if(val!='.'){
                    if(seen.count(val)){
                        return false;
                    }
                    seen.insert(val);
                }
            }
        }
        // for checking 3*3
        for(int rowStart=0; rowStart<9; rowStart+=3){
            for(int colStart=0; colStart<9; colStart+=3){
                unordered_set<char>seen;
                for(int i=rowStart; i<rowStart+3;i++){
                    for(int j=colStart; j<colStart+3; j++){
                        char val=board[i][j];
                        if(val!='.'){
                    if(seen.count(val)){
                        return false;
                    }
                    seen.insert(val);
                }
                    }
                }
            }
        }
        return true;
    }
};