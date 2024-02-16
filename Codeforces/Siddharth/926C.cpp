#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; 
cin>>t; 
while(t--){
    bool check =true;
long long k,a,x;
long long t = 0, ti;
        cin >> k >> x >> a;
        for (long long i = 0; i < x; ++i) {
            ti = t / (k - 1) + 1;
            t += ti;
            if(t>a){
                check=false;
            
            break;
        }
        }
        if (k * (a - t) > a&& check) cout << "Yes\n";
        else cout << "No\n";
}
}

