#include<bits/stdc++.h>
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
        sort(a,a+n);
        if(a[0]==a[n-1]){
            cout<<-1<<endl;
        }
        else{
            vector<int> b;
            vector<int> c;
            int x=a[n-1];
            int i;
            for(i=n-1;i>=0;i--){
                if(a[i]==x){
                    c.push_back(a[i]);
                }
                else{
                    b.push_back(a[i]);
                }
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}