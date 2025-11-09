class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>copy=matrix;
        int n=matrix.size();
        int r=0;
        
        for(int i=n-1;i>=0;i--){
            
            for(int j=0;j<n;j++){
                matrix[j][i]=copy[r][j];

            }
            r++;
        }
        
    }
};