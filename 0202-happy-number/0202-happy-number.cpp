class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1){
            int temp=n;
            int sum=0;
            while(temp){
                sum+=(temp%10)*(temp%10);
                temp/=10;
            }
            if(sum==1)return 1;
            n=sum;
            if(s.count(n))return 0;
            else s.insert(n);
        }
        return 1;
    }
    
};