class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int s=0,e=r*c-1;
        int mid=(s+e)/2;
        while(s<=e){
            int rw=mid/c;
            int cl=mid%c;
            if(matrix[rw][cl]==target)return 1;
            else if(matrix[rw][cl]<target){
                s=mid+1;
            }
            else e=mid-1;
            mid=(s+e)/2;
        }
        return 0;
    }
};