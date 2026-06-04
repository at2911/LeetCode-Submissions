class Solution {
public:
  vector<int>copy;
    int count(int n){
        copy.clear();
        int s=0;
        if(n<101)return 0; 
       while(n){
        copy.push_back(n%10);
        n/=10;
       }
       for(int i=1;i<copy.size()-1;i++)
        if((copy[i]>copy[i-1]&&copy[i]>copy[i+1])||(copy[i]<copy[i-1]&&copy[i]<copy[i+1]))s++;
       return s;   
    }
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            ans+=count(i);
        }
        return ans;
    }
};