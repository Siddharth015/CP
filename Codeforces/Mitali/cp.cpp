#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        /*count number of 1 and -1*/
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        if(c1>=c2){
            if(c2%2!=0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
            continue;
        }
        else{
            int n=0;
            while(c1<c2){
                c1++;
                c2--;
                n++;
            }
            if(c2%2!=0){
                n++;
            }
            cout<<n<<endl;

        }
    }
    return 0;
}