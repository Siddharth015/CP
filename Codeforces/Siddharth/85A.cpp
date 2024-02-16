#include<bits/stdc++.h>
using namespace std;

int main() {
   string s1,s2;
   cin>>s1>>s2;
   int n=s1.length();
   for(int i=0;i<n;i++){
    s1[i]=tolower(s1[i]);
    s2[i]=tolower(s2[i]);
   }
   int c=0;
   for(int i=0;i<n;i++){
    if(int(s1[i])==int(s2[i])){

c++;
continue;
    }

     else if(int(s1[i])>int(s2[i])){
        cout<<"1";
        break;
    }
     else if(int(s1[i])<int(s2[i])){
        cout<<"-1";
        break;
    }
   }
   if(c==n)
    cout<<"0";
    return 0;
}
