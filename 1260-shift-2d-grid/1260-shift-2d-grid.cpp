class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>>ans=grid;
        k%=(r*c);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int ind=i*c+j;
                int newI=(ind+k)%(r*c);
                ans[newI/c][newI%c]=grid[i][j];
                
            }
        }
        return ans;

    }
};