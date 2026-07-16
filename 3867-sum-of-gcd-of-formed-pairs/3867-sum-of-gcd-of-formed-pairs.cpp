class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            nums[i]=gcd(nums[i],maxi);
        }
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        long long sum=0;
        while(i<j){
            if(i==j)return sum;
            sum+=gcd(nums[i],nums[j]);
            i++;
            j--;
        }
        return sum;
        
    }
};