#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll distance(ll x1,ll y1,ll x2,ll y2){
    return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
}

void dfs(ll i,ll m,vector<ll> adj[],int vis[],ll x[],ll r[],int &flag){
    vis[i]=1;
    if(x[i]+r[i]>=m){
        flag=1;
    }
    for(auto it:adj[i]){
        if(!vis[it]){
            dfs(it,m,adj,vis,x,r,flag);
        }
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>m>>n;
        ll x[n],y[n],r[n];
        vector<ll> startx;
        for(ll i=0;i<n;i++){
            cin>>x[i]>>y[i]>>r[i];
            if(x[i]<=r[i]){
                startx.push_back(i);
            }
        }
        vector<ll> adj[n];
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                if(distance(x[i],y[i],x[j],y[j])<=(r[i]+r[j])*(r[i]+r[j])){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int vis[n]={0};
        int flag=0;
        for(auto i:startx){
            if(!vis[i]){
               dfs(i,m,adj,vis,x,r,flag);
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}