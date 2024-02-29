#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count1=0;
        int count0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count1++;
            }
            else{
                count0++;
            }
            
        }
        int ans=0;
        for(int i=0;i<s.size();i++){
            if((s[i]=='0' && count1==0) || (s[i]=='1' && count0==0)){
                ans=(s.size()-i);
                break;
            }
            if(s[i]=='0'){
                count1--;
            }
            else{
                count0--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}