class Solution {
public:
    bool isVal(int a,int b){
        //if(a==b)return 0;
        while(a){
            int d=a%10;
            if(d==0)return 0;
            a/=10;
        }
        while(b){
            int d=b%10;
            if(d==0)return 0;
            b/=10;
        }
        return 1;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>temp;
        for(int i=1;i<=n/2;i++){
            if(isVal(i,n-i)){
                temp.push_back(i);
                temp.push_back(n-i);
                break;
            }
        }
        return temp;
    }
};