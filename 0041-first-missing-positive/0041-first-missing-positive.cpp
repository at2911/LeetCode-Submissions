class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i:nums){
            s.insert(i);
        }
        for(int i=1;i<=100001;i++){
            if(!s.count(i))return i;
        }
        return 1;
    }
};