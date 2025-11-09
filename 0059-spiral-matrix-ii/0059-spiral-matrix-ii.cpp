class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>ans(n, vector<int>(n, 0));
    int total=n*n;
    int rows=0;
    int cols=0;
    int rowl=n-1;
    int coll=n-1;
    int c=1;
    while(c<=total){
        for(int i=cols;c<=total && i<=coll;i++){
            ans[rows][i]=c;
            c++;
        }
        rows++;
        for(int i=rows;c<=total && i<=rowl;i++){
            ans[i][coll]=c;
            c++;
        }
        coll--;
        for(int i=coll;c<=total &&i>=cols;i--){
            ans[rowl][i]=c;
            c++;
        }
        rowl--;
        for(int i=rowl;c<=total&& i>=rows;i--){
            ans[i][cols]=c;
            c++;
        }
        cols++;
        


    }
    return ans;

        
    }
};