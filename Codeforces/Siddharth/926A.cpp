#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=1;i<n;i++){
sum+=v[i]-v[i-1];
    }
    cout<<sum<<endl;
  }
}
