class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(int i:nums){
            if(i%3!=0)c++;
        }
        return c;
        
    }
};