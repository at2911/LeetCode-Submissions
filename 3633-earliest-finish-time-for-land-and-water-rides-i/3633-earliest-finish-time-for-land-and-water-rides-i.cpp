class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int s=INT_MAX;

        for(int i=0;i<landStartTime.size();i++){ 
             int t1=landStartTime[i]+landDuration[i];
            for(int j=0;j<waterStartTime.size();j++){
               
                if(t1>=waterStartTime[j])t1+=waterDuration[j];
                else{
                    t1+=((waterStartTime[j]-t1)+waterDuration[j]);
                }
                int t2=waterStartTime[j]+waterDuration[j];
                if(t2>=landStartTime[i])t2+=landDuration[i];
                else t2+=(landStartTime[i]-t2)+landDuration[i];
                s=min(s,min(t1,t2));   
                t1=landStartTime[i]+landDuration[i];
            }
        }
        return s;
        
    }
};