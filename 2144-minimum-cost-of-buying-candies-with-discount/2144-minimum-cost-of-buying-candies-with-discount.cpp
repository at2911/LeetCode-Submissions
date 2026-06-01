class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int s=0;
        sort(cost.begin(),cost.end(),greater<int>());
        int c=0;
        for(int i:cost){
            if(c==2){
                c=0;
                continue;
            }
            s+=i;
            c++;
        }
        return s;


        
    }
};