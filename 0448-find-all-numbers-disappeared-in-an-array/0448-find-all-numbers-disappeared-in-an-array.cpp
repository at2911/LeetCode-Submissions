class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<=n;i++){
            int l=0;
            int r=n-1;
            int mid=l+(r-l)/2;
            while(l<r){
                if(nums[mid]==i) break;
                else if(nums[mid]>i){
                    r=mid-1;
                }
                else l=mid+1;
                mid=l +(r-l)/2;

            }
            if(nums[mid]==i) continue;
            ans.push_back(i);

        }
        return ans;

    }
};