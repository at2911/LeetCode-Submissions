class Solution {
public:
    int digSum(int x){
        int s=0;
        while(x){
            s+=x%10;
            x/=10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=digSum(nums[i]);
        }
        return *min_element(nums.begin(),nums.end());
    }
    
};