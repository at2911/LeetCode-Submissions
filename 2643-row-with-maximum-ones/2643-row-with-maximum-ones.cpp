class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
          unordered_map<int,int>mp;
          int n=mat.size();
          int m=mat[0].size();
          int maxi=0;
          int maxind=0;
          vector<int>ans(2);
          for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(mat[i][j])cnt++;
            }
            if(cnt>maxi){
                maxi=cnt;
                maxind=i;
            }
          }
          ans[0]=maxind;
          ans[1]=maxi;
          return ans;
    }
};