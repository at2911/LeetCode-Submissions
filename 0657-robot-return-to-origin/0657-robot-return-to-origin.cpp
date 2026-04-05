class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int>hz;
        vector<int>vt;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                hz.push_back(-1);
            }
             if(moves[i]=='R'){
                hz.push_back(1);
            }
          if(moves[i]=='U'){
                vt.push_back(1);
            }
              if(moves[i]=='D'){
                vt.push_back(-1);
            }
           
            
            

           
            
        }
         if(accumulate(hz.begin(),hz.end(),0)==0 && accumulate(vt.begin(),vt.end(),0)==0)return true;
         return false;
        
    }
};