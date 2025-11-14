class Solution {
public:
    int addDigits(int num) {
        int ans=num;
        
       while(ans>=10){
       
         num=ans;
         ans=0;
         while(num!=0){
            ans+=num%10;
            num/=10;
        }
       }
       return ans;
       
        
        

    }
};