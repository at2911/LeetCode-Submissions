class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int c=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            int rowsum=0;
            int temp=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)temp=j;
                rowsum+=mat[i][j];
                if(rowsum>1)break;

            }
            if(rowsum==1){
                int colsum=0;
                for(int k=0;k<n;k++){
                    colsum+=mat[k][temp];
                    if(colsum>1)break;
                }
                if(colsum==1)c++;
            }
        }
        return c;
        
    }
};