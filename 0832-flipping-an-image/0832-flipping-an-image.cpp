class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        for(int i=0;i<image.size();i++){
             vector<int>temp;
            for(int j=image[i].size()-1;j>=0;j--){
               
                int x=image[i][j];
                if(x)temp.push_back(0);
                else temp.push_back(1);
            }
            ans.push_back(temp);

        }
        return ans;
        
    }
};