#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        /*check if array is already sorted in descending order*/
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
        if(k==1 && n>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        }
    }
    return 0;
}