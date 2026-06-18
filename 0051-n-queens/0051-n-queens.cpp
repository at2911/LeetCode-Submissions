class Solution {
public:
    bool isPossible(int i,int j,vector<string>&board,int n){
        int r=i,col=j;
        while(r>=0 && col>=0){
            if(board[r][col]=='Q')return 0;
            r--;
            col--;
        }
        r=i,col=j;
        while(col>=0){
            if(board[r][col]=='Q')return 0;
            col--;
        }
        col=j;
        while(r<n && col>=0){
            if(board[r][col]=='Q')return 0;
            r++;
            col--;
        }
        return 1;

    }
    void solve(int col,vector<vector<string>>&ans,vector<string>&board,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(isPossible(i,col,board,n)){
                board[i][col]='Q';
                solve(col+1,ans,board,n);
                board[i][col]='.';
            }
            
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){ 
            board[i]=s;
        }
        solve(0,ans,board,n);
        return ans;
    }
};