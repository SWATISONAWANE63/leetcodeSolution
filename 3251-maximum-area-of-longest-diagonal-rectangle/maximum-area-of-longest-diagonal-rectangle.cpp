class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdia=0;
        int maxArea=0;
        for(int i=0;i<dimensions.size();i++){
            int l=dimensions[i][0];
            int w=dimensions[i][1];
            int dia=l*l+w*w;
            int area=l*w;
            if(dia>maxdia){
                maxdia=dia;
                maxArea=area;
            }else if(dia==maxdia){
                maxArea=max(maxArea,area);

            }

        }
        return maxArea;
    }
};