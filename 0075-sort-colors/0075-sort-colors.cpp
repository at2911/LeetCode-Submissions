class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<nums.size() && j>=0 &&i<j){
            while(i<nums.size() &&nums[i]==0){
                i++;
            }
            while(j>=0 &&nums[j]!=0){
                j--;
            }
            if(i>=j)break;
            swap(nums[i],nums[j]);

        }
        i=0,j=nums.size()-1;
        while(i<nums.size()&&nums[i]==0){
        i++;
        }
        while(i<nums.size()&&j>=0&&i<j){
            while(i<nums.size()&&nums[i]==1)i++;
            while(j>=0&&nums[j]==2)j--;
            if(i>=j)return;
            swap(nums[i],nums[j]);
        }
        
    }
};