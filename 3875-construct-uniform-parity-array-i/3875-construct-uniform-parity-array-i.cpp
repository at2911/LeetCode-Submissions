class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o=0,e=0;
        for(int i:nums1){
            if(i&1)o++;
            else e++;
        }
        int n=nums1.size();
        if(e==n || o==n || o>=1)return 1;
        return 0;

    }
};