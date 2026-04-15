class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int mini=INT_MAX;
        bool flag=0;
        if(words[startIndex]==target)return 0;
        int i=startIndex;
        do{
            i=(i+1)%words.size();
            if(words[i]==target){
                flag=1;
                if(i>startIndex)mini=min(mini,i-startIndex);
                else mini=min(mini,((int)words.size()-startIndex+i));
            }
            
        }while(i!=startIndex);
        if(!flag)return -1;
        i=startIndex;
        do{
            i=i-1;
            if(i<0)i+=words.size();
            if(words[i]==target){

            if(i<startIndex)mini=min(mini,(startIndex-i));
            else mini=min(mini,(startIndex+(int)words.size()-i));
            }
        }while(i!=startIndex);
        return mini;
    }
};