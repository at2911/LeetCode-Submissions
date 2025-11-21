class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum=INT_MIN;
        int m=accounts.size();
        int n=accounts[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            sum=0;
            for(int j=0;j<n;j++){
                sum+=accounts[i][j];

            }
            maximum=max(maximum,sum);
        }
        return maximum;

    }
};