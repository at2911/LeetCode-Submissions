class Solution {






public:
    vector<int>DAT;
    int steps(int n){
    if (n==1) return 1;
    if (n==2) return 2;
    else {
        if(DAT[n]==0){
            DAT[n]=steps(n-1)+steps(n-2);
        }
        return DAT[n];
    }
    return 0;
    }

    int climbStairs(int n) {
        DAT.resize(n+1);
       
        return steps(n);
        
    }
};