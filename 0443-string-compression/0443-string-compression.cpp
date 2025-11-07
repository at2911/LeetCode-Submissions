class Solution {
public:
    int compress(vector<char>& chars) {

        int count=1;
        int j=0;
        int s=chars.size();
        if(s==1) return 1;
        vector<char>temp=chars;
        for(int i=0;i<s-1;i++){
            if(temp[i]==temp[i+1]){
                count++;
            }
            else{
                chars[j++]=temp[i];
                int d=1000;
                if(count>1){while(d>0){
                    int r=count/d;
                    if(r!=0)chars[j++]=r%10+'0';
                    d/=10;

                }
                }
                count=1;

            }

        }
        if(temp[s-1]==temp[s-2]){
            chars[j++]=temp[s-1];
           
            int d=1000;
                while(d>0){
                    int r=count/d;
                    if(r!=0)chars[j++]=r%10+'0';
                    d/=10;

                }
                

        }
        else{
            chars[j++]=temp[s-1];
        }
        return j;
        
    }
};