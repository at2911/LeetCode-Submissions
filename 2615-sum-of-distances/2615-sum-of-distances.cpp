class Solution {
public:
    int binaryS(int x,vector<int>&v){
        int l=0,r=v.size()-1;
        int mid=l+(r-l)/2;
        while(l<=r){
            if(v[mid]==x)return mid;
            else if(v[mid]>x){r=mid-1;}
            else l=mid+1;
            mid=l+(r-l)/2;
        }
        return -1;
    }
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        unordered_map<int,vector<long long>>pfs;
        vector<long long > ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);          
        }
        for(auto &i:mp){
            long long  x=0;
            for(int j=0;j<i.second.size();j++){
                x+=i.second[j];
                pfs[i.first].push_back(x);
            }
        }
        for(int i=0;i<nums.size();i++){
          
            long long temp=0;
           vector<long long> &v=pfs[nums[i]];
           vector<int>&v1=mp[nums[i]];
              if(v.size()==1){ans.push_back(0);
           continue;
           }
           int idx=binaryS(i,v1);
           temp+=((1LL*idx*i)-(v[idx]-v1[idx]));
           temp+=((v[v.size()-1]-v[idx])-(v.size()-1-idx)*i);
           ans.push_back(temp);
          
        }
        return ans;
    }
       


};