class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int>sorted;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                sorted.push_back(nums1[i]);
                i++;
            }
            else {
                sorted.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            sorted.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            sorted.push_back(nums2[j]);
            j++;
        }
        int n=sorted.size();
        if(n==0)return 0;
        if(n&1){
            return 1.0*sorted[n/2];
        }
        return (1.0*sorted[n/2]+sorted[n/2-1])/2.0;

    }
};