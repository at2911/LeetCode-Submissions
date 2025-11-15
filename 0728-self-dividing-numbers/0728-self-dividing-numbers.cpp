class Solution {
public:
    bool check(int n){
        int copy=n;
        while(n!=0){
            int r=n%10;
            if(r==0) return 0;
            if(copy%r!=0){
                return false;
            }
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>sol;
        while(left<=right){
            if(check(left)) sol.push_back(left);
            left++;

        }
        return sol;
    }
};