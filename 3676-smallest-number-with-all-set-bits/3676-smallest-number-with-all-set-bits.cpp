class Solution {
public:
    int smallestNumber(int n) {
        int b=0;
        for(int i=n;;i++){
            int j=i;
            
            while(j!=0){
                 b= j&1;
                if(b==0){
                    break;
                }
                j=j>>1;
            }
            if(b==0) continue;
              return i;


        }
        return n;

    }
};