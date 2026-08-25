class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s;
        for(int i:nums){
            s.insert(i);
        }
    
    int num=k;
    for(int i=k;i<=200;i+=k){
        if(!s.count(i))return i;
    }
    return k;
    }
};