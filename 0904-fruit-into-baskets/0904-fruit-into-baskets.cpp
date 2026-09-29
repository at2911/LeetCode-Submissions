class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0;
        unordered_map<int,int>mp;
        int ans=0;
        for(r=0;r<fruits.size();r++){
            mp[fruits[r]]++;
            
            while(l<r && mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0)mp.erase(fruits[l]);
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
        
    }
};