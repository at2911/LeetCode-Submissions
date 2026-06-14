class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>pmax(n);
        vector<int>smax(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(height[i]>maxi)maxi=height[i];
            pmax[i]=(maxi);
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(height[i]>maxi)maxi=height[i];
            smax[i]=maxi;
        }
        int sum=0;
        for(int i=1;i<n-1;i++){
            if(height[i]<pmax[i]&& height[i]<smax[i]){
                sum+=min(pmax[i],smax[i])-height[i];
            }
        }
        return sum;
    }
};