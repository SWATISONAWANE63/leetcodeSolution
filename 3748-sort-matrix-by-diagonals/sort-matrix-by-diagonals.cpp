class Solution {
public:
void sortdia(int r,int c, vector<vector<int>>&grid, bool asc, int n){
    vector<int>vec;
    int i=r;
    int j=c;
    while(i<n && j<n){
        vec.push_back(grid[i][j]);
        i++;
        j++;
    }
    if(asc){
        sort(begin(vec),end(vec));
    }else{
        sort(rbegin(vec),rend(vec));
    }
    i=r;
    j=c;
    for(int & val:vec){
        grid[i][j]=val;
        i++;
        j++;
    }
}
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
       int n=grid.size();
     for(int r=0;r<n;r++){
        sortdia(r,0,grid,false,n);
     }
     for(int col=1; col<n;col++){
        sortdia(0,col,grid,true,n);
     }
     return grid;
    }
};