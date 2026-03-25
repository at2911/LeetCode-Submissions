class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long sum=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                sum+=grid[i][j];
            }
        }
        long long copy=sum;
        long long prev=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                prev+=grid[i][j];
                copy-=grid[i][j];

            }
            if(prev==copy)return true;
        }
        copy=sum;
        prev=0;
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                prev+=grid[j][i];
                copy-=grid[j][i];
            }
            if(prev==copy)return true;
        }
        return false;
        
    }
};