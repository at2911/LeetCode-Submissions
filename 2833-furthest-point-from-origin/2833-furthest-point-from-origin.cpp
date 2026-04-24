class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int d=0;
        int x=0;
        for(char c:moves){
            if(c=='L')d--;
            else if(c=='R')d++;
            else x++;
           
        }
        return abs(d)+x;
        
    }
};