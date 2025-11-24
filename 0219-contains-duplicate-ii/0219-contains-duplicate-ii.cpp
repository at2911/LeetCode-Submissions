class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0)return 0;
        unordered_set<int>s;
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i]))return 1;
            else{
                if(s.size()<k)s.insert(nums[i]);
                else {s.erase(nums[l]);
                l++;
                s.insert(nums[i]);}

            }
            
        }
        return 0;
        
    }
};