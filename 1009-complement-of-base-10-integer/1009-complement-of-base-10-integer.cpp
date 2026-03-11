class Solution {
public:
    int bitwiseComplement(int n) {
            if(n==0)return 1;
        vector<int>comp;
        int c=0;
        while(n){
            int d=n&1;
            if(d)comp.push_back(0);
            else comp.push_back(1);
            n=n>>1;
           

        }
        for(int i=0;i<comp.size();i++){
            c=c+pow(2,i)*comp[i];
        }
        return c;
        

    }
};