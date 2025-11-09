class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row * col;
        int stRow = 0;
        int stCol = 0;
        int eRow = row - 1;
        int eCol = col - 1;
        vector<int> ans;
        while (count < total) {
            for (int i = stCol; count < total && i <= eCol; i++) {
                ans.push_back(matrix[stRow][i]);

                count++;
            }
            stRow++;
            for (int i = stRow; count < total && i <= eRow; i++) {
                ans.push_back(matrix[i][eCol]);

                count++;
            }
            eCol--;
            for (int i = eCol; count < total && i >= stCol; i--) {
                ans.push_back(matrix[eRow][i]);

                count++;
            }
            eRow--;
            for (int i = eRow; count < total && i >= stRow; i--) {
                ans.push_back(matrix[i][stCol]);

                count++;
            }
            stCol++;
        }
        return ans;
    }
};