class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        for (int i = 0; i < queries.size(); i++) {
            int r1 = queries[i][0];
            int c1 = queries[i][1];
            int r2 = queries[i][2];
            int c2 = queries[i][3];
            // cout<<r1<<c1<<r2<<c2<<endl;
            for(int j=r1;j<=r2;j++){
                for(int k=c1;k<=c2;k++){
                    ans[j][k]++;
                }
            }
        }
        return ans;
    }
};