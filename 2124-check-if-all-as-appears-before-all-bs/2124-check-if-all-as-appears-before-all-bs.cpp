class Solution {
public:
    bool checkString(string s) {
        bool isA=false;
        for(int i:s){

            if(i=='a' && !isA) continue;
            else{
                isA=true;
            }
            if(i=='b') continue;
            else return false;
            
            
        }
        return true;
    }
};