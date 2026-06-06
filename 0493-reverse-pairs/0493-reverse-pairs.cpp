class Solution {
public:
    int ans=0;
    void merge(vector<int>&nums,int s,int e){
        int mid=(s+e)/2;
        vector<int>L(mid-s+1);
        vector<int>R(e-mid);
        for(int i=0;i<L.size();i++){
            L[i]=nums[i+s];
        }
        for(int i=0;i<R.size();i++){
            R[i]=nums[i+mid+1];
        }
        int i=0,j=0,k=s;
        for(int i=0;i<L.size();i++){
           while(j<R.size()&& 1LL*2*R[j]<L[i]){
            j++;
           }
           ans+=j;
        }
        i=0;
        j=0;
        while(i<L.size() && j<R.size()){
            if(L[i]<=R[j]){
                nums[k]=L[i];
                i++;
                k++;
            }
            else {
                nums[k]=R[j];
                j++;
                k++;
            }
        }
        while(i<L.size()){
            nums[k]=L[i];
            i++;
            k++;
        }
         while(j<R.size()){
            nums[k]=R[j];
            j++;
            k++;
        }
    }
    void ms(vector<int>&nums,int s,int e){
        if(s>=e)return;
        int mid=(s+e)/2;
        ms(nums,s,mid);
        ms(nums,mid+1,e);
        merge(nums,s,e);
    }
    int reversePairs(vector<int>& nums) {
        ms(nums,0,nums.size()-1);
        return ans;
    }
};