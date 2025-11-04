class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int r=letters.size()-1;
        int mid=l+(r-l)/2;
        char ans=letters[0];
        while(l<=r){
            if(letters[mid]>target){
                ans=letters[mid];
                r=mid-1;
                
            }
            else{
                l=mid+1;
            }
            mid=l+(r-l)/2;
        }
        return ans;
        
    }
};