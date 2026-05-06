class Solution {
public:
    string convertToBase7(int copy) {
        if(copy==0)return "0";
        int num=abs(copy);
       string ans="";
       while(num){
        int d=num%7;
        num=num/7;
        ans=to_string(d)+ans;
       }
       if(copy<0)ans="-"+ans;
       return ans;
        
    }
};