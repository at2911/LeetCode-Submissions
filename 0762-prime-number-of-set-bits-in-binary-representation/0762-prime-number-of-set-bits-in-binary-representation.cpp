class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int c=0;
        for(int i=left ; i<=right;i++){
            int count=0;
            int check=i;
            while(check!=0){
                int d=check&1;
                if(d==1)count++;
                check=check>>1;

            }
            int cnt=0;
            for(int i=1;i<=count;i++){
                if(count%i==0)cnt++;
                if(cnt>2)break;
            }
            if(cnt==2)c++;


            }
            return c;
        }
    
};