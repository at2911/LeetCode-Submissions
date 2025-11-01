class Solution {
public:
    int strStr(string haystack, string needle) {
        int s=haystack.size();
        
        int tl=needle.size();
        for(int i=0;i<s;i++){
            
            if(haystack[i]!=needle[0]) continue;
            int c=0;
            for(int j=i;j<tl+i;j++){
                if(haystack[j]!=needle[j-i]){
                    break;
                    
                }
                c++;

            }
            if(c==tl) return i;
        }
        return -1;
        
    }
};