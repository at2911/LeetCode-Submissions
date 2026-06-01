class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>temp(1,1);
        ans.push_back(temp);
        for(int i=1;i<numRows;i++){
            vector<int>temp;
            temp.push_back(1);
            for(int j=0;j<i-1;j++){
                int s=ans[i-1][j]+ans[i-1][j+1];
                temp.push_back(s);
            }
            temp.push_back(1); 
            ans.push_back(temp);

        }
        return ans;
        
    }
};