class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int>count(51,-0);
        unordered_set<int>s;
        for(int i=0;i<=nums.size()-k;i++){
            for(int j=i;j<k+i;j++){
                s.insert(nums[j]);
            }
            for(auto i:s){
                count[i]++;
            }
            s.clear();
        }
        int maxi=-1;
        for(int i=0;i<51;i++){
            if(count[i]==1){
                maxi=max(maxi,i);
            }
        }
        return maxi;
        
    }
};