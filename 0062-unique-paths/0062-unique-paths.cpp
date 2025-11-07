class Solution {
public:
    vector<vector<int>> count;

    int paths(int m, int n) {
        if(m==0 || n==0) return 0;
        if (m == 1 && n == 1)
            return 1;
        else {
            if (count[m][n] == 0) {
                count[m][n] = paths(m - 1, n) + paths(m, n - 1);
            }
            return count[m][n];
        }
        return 0;
    }

    int uniquePaths(int m, int n) {
        count.resize(m + 1, vector<int>(n + 1, 0));
        return paths(m, n);
    }
};