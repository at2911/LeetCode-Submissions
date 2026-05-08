class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(),num.end());
        int s=num[0]+k;
        int carry=s/10;
        num[0]=s%10;
        for(int i=1;i<num.size();i++){
            num[i]+=carry;
            carry=num[i]/10;
            num[i]=num[i]%10;
            if(!carry)break;

         }
         while(carry){
            num.push_back(carry%10);
            carry/=10;
         }
        reverse(num.begin(),num.end());
        return num;
    }
};