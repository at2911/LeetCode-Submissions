class Solution {
public:
    bool checkOnesSegment(string s) {
        int ctr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')continue;
            else if( i>1 && s[i]=='1' && s[i-1]=='0'){
                ctr++;
                
            }
            else{
                if(i==0) ctr++;
            }
            if(ctr>1)return false;
          
        }
        if(ctr==1)return true;
        return false;
    }

       
};