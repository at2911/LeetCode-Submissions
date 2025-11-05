class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        int s=nums.size();
        k=k%s;
        for(int i=s-k;i<s;i++){
            int x=nums[i];
            temp.push_back(x);

            
        }
        for(int i=0;i<s-k;i++){
            int x=nums[i];
            temp.push_back(x);
        }
        nums=temp;
        
    }
};