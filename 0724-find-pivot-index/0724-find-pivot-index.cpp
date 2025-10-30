class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int l=0,r=nums.size()-1;
        
        int mid=l +(r-l)/2;
        while(l<=r){
            int sl=0,sr=0;
            for(int i=0;i<mid;i++){
                sl+=nums[i];
            }
            for(int i=mid+1;i<=nums.size()-1;i++){
                sr+=nums[i];
            }
            if(sl==sr){
                return mid;
            }
            else if(sl>sr){
                r=mid-1;
            
            }
            else{
                l=mid+1;

            }
            mid= l + (r-l)/2;
            
        }
        
         return -1;
    }
};