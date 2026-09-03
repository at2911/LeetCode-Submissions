class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int o=0,e=0;
        for(int i:nums1){
            if(i&1)o++;
            else e++;
        }
        if(o==n || e==n)return 1;
        sort(nums1.begin(),nums1.end());
        if(nums1[0]&1)return 1;
        return 0;
        
    }
};