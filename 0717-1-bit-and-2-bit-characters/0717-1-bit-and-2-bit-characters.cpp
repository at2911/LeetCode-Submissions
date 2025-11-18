class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int s=bits.size();
        bool two=0;
        int i=0;
        while(i<s){
            if(bits[i]==1){
                two=1;
                i+=2;
            }
            else{
                two=0;
                i++;
            }
        }
        if(!two) return 1;
        return 0;
        

       

    }
};