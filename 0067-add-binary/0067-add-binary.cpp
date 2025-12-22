class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0;
        int carry=0;
        while(i<a.size() && i<b.size()){
            if(a[i]=='1' && b[i]=='1'){
                if(carry==0){
                    ans.append(1,'0');
                    carry=1;
                }
                else{
                    ans.append(1,'1');
                    carry=1;
                }
            }
            else if((a[i]=='1'&&b[i]=='0') || (a[i]=='0' && b[i]=='1')){
                if(carry==0){
                    ans.append(1,'1');
                    carry=0;

                }
                else{
                    ans.append(1,'0');
                    carry=1;
                }
            }
            else{
                if(carry==0)ans.append(1,'0');
                else{
                    ans.append(1,'1');
                    carry=0;
                }
            }
            i++;
            cout<<ans<<" ";
        }
        while(i<a.size()){
            if(a[i]=='1'){
                if(carry==1){
                    ans.append(1,'0');
                    carry=1;
                }
                else{
                    ans.append(1,'1');
                    carry=0;
                }
            }
            else{
                if(carry==0){
                    ans.append(1,'0');
                }
                else {
                    ans.append(1,'1');
                    carry=0;
                }
            }
            i++;
             cout<<ans<<" ";
        }
        while(i<b.size()){
            if(b[i]=='1'){
                if(carry==1){
                    ans.append(1,'0');
                    carry=1;
                }
                else{
                    ans.append(1,'1');
                    
                }
            }
            else{
                if(carry==0){
                    ans.append(1,'0');
                }
                else {
                    ans.append(1,'1');
                    carry=0;
                }
            }
            i++;
             cout<<ans<<" ";
        }
        if(carry==1)ans.append(1,'1');
        reverse(ans.begin(),ans.end());
        return ans;
    }

};