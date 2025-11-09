class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < row; i++) {
            int s = 0;
            int e =  col - 1;
            int mid = s + (e - s) / 2;
            while (s <= e) {
                int ele = matrix[i][mid];
                if (ele == target)
                    return 1;
                else if (ele > target)
                    e = mid - 1;
                else
                    s = mid + 1;
                mid = s + (e - s) / 2;
            }
        }
        return 0;
        // int s=0;
        // int e=row*col-1;
        // int mid=s+(e-s)/2;
        // while(s<=e){
        //     int ele=matrix[mid/col][mid%col];
        //     if(ele==target) return 1;
        //     else if(ele>target){
        //         int sr=mid/col, sl=mid%col-1;
        //         int midr=sr+(sl-sr)/2;
        //     }

        // }
    }
};