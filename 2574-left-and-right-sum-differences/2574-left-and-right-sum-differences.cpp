class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>l(n,0),r(n,0);
        l[0]=0;
        r[n-1]=0;
        for(int i=1;i<nums.size();i++){
            l[i]=l[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            r[i]=r[i+1]+nums[i+1];
        }
        for(int i=0;i<l.size();i++){
            l[i]=abs(l[i]-r[i]);
        }
        return l;
    }
};