class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>temp;
        int ans=0;
        int r=grid[0][0]%x;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]%x!=r)return -1;
                temp.push_back(grid[i][j]);

            }
        }
        sort(temp.begin(),temp.end());
        int n=temp.size();
        
        int eq=temp[n/2];
        for(int i=0;i<n;i++){
            ans=ans+abs(temp[i]-eq)/x;
        }
        
        return ans;
        

    }
};