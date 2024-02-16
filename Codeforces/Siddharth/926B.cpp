#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; 
cin>>t; 
while(t--){ 
    long long n; 
    cin>>n;
     long long k; 
     cin>>k;
     long long m;
     if(k%2==0)
     m=k/2; 
 else  m=k/2+1;
     if(k==4*n-2)
        cout<<m+1<<endl;
         else {  cout<<m<<endl;}
} }


