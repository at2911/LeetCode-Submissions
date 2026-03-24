class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        int prefix=1;
        int suffix=1;
        vector<vector<int>>p1=grid;
        vector<vector<int>>s1=grid;
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[0].size();j++){
                p1[i][j]=prefix%12345;
                prefix=1LL*prefix*grid[i][j]%12345;
               
               }

            }
            for(int i=grid.size()-1;i>=0;i--){
                for(int j=grid[0].size()-1;j>=0;j--){
                    s1[i][j]=suffix%12345;
                    suffix=1LL*suffix*grid[i][j]%12345;
                }
            }
             for(int i=0;i<grid.size();i++){
            vector<int>temp;
            for(int j=0;j<grid[0].size();j++){
                temp.push_back(1LL*p1[i][j]*s1[i][j]%12345);
               
               
               }
               ans.push_back(temp);

        }

      
    
        return ans;

        
    }
};