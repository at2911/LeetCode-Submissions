class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int c=0;
        unordered_map<int,int>mp;

        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            mp[temp[i]]++;
        }
        int maxi=INT_MIN;
        int mini=temp[0];
        int j=0;
        for(int i=0;i<nums.size();i++){
         maxi=max(maxi,nums[i]);
            while(j<temp.size() && mp[temp[j]]==0){
                
                j++;
            }
            mini=temp[j];
           // cout<<maxi<<" "<< mini<<endl;
            if(maxi-mini<=k)return i;
            mp[nums[i]]--;
       
        }
        return -1;
        
    }
};