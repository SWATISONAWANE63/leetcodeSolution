class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            unordered_set<char>seen;
            for(int j=0; j<9; j++){
                char val=board[i][j];
                if(val=='.'){
                    continue;
                }else if(val!='.'){
                    if(seen.count(val)){
                        return false;
                    }
                    seen.insert(val);
                }
            }
        }
        for(int j=0; j<9; j++){
            unordered_set<char>seen;
            for(int i=0; i<9; i++){
                char val=board[i][j];
                if(val=='.'){
                    continue;
                }else if(val!='.'){
                    if(seen.count(val)){
                        return false;
                    }
                    seen.insert(val);
                }
            }   
        }
        for(int r=0; r<9; r+=3){
            for(int c=0; c<9; c+=3){
                unordered_set<char>seen;
                for(int i=r; i<r+3; i++){
                    for(int j=c; j<c+3; j++){
                        char val=board[i][j];
                        if(val=='.'){
                            continue;
                        }else if( val!='.'){
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