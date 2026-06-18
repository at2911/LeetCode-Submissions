class Solution {
public:
    bool isPossible(int r,int c,int x,vector<vector<char>>&board){
        char ch='0'+x;
        for(int i=0;i<9;i++){
            if(board[i][c]==ch)return 0;
        }
        for(int i=0;i<9;i++){
            if(board[r][i]==ch)return 0;
        }
        int m=r/3;
        int n=c/3;
        for(int i=m*3;i<m*3+3;i++){
            for(int j=n*3;j<n*3+3;j++){
                if(board[i][j]==ch)return 0;
            }
        }
        return 1;
    }
    bool solve(int r,int c,vector<vector<char>>&board){
        if(r==9)return 1;
        int nr=r,nc=c+1;
        if(nc==9){
            nr++;
            nc=0;
        }
        if(board[r][c]!='.')return solve(nr,nc,board);
        for(int i=1;i<=9;i++){
            if(isPossible(r,c,i,board)){
                board[r][c]='0'+i;
                if(solve(nr,nc,board))return 1;
                board[r][c]='.';
            }
        }
        return 0;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(0,0,board);
    }
};