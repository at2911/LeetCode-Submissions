class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       sort(jewels.begin(),jewels.end());
       sort(stones.begin(),stones.end());
       int c=0;
       int i=0;
       int j=0;
       while(i<jewels.size() && j<stones.size()){
        while(jewels[i]==stones[j]){
            j++;
            c++;
        }
        // i++;
        while(j<stones.size() && jewels[i]>stones[j]){
            j++;
        }
        while(i<jewels.size() && jewels[i]<stones[j])
             i++;
        
       }
       return c;
        
    }
};