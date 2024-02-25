/*Specifically, Billy's N kids are tagged with ID numbers 1...N.

Billy wants to take a picture of the kids standing in a line in a very specific ordering, represented by the contents of an array A[1...N], where A[j] gives the ID number of the jth kid in the ordering.

He arranges the kids in this order, but just before he can press the button on his camera to snap the picture, up to one kid moves to a new position in the lineup.

More precisely, either no kids move, or one kid vacates her current position in the lineup and then re-inserts herself at a new position in the lineup.

Frustrated but not deterred, Billy again arranges his kids according to the ordering in A, but again, right before he can snap a picture, up to one kid (different from the first) moves to a new position in the lineup.

The process above repeats for a total of five photographs before Billy gives up.

Given the contents of each photograph, see if you can reconstruct the original intended ordering A. Each photograph shows an ordering of the kids in which up to one kid has moved to a new location, starting from the initial ordering in A.

Moreover, if a kid opts to move herself to a new location in one of the photographs, then that kid does not actively move in any of the other photographs (although that kid can end up at a different position due to other kids moving, of course).*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll> m1,m2,m3,m4,m5;

bool compare(ll a,ll b){
    int c1=0,c2=0;
    if(m1[a]>m1[b]){
        c1++;
    }
    else{
        c2++;
    }
    if(m2[a]>m2[b]){
        c1++;
    }
    else{
        c2++;
    }
    if(m3[a]>m3[b]){
        c1++;
    }
    else{
        c2++;
    }
    if(m4[a]>m4[b]){
        c1++;
    }
    else{
        c2++;
    }
    if(m5[a]>m5[b]){
        c1++;
    }
    else{
        c2++;
    }
    return c1<c2;
}

int main(){
        ll n;
        cin>>n;
        ll a1[n],a2[n],a3[n],a4[n],a5[n];
        for(ll i=0;i<n;i++){
            cin>>a1[i];
            m1[a1[i]]=i;
        }
        for(ll i=0;i<n;i++){
            cin>>a2[i];
            m2[a2[i]]=i;
        }
        for(ll i=0;i<n;i++){
            cin>>a3[i];
            m3[a3[i]]=i;
        }
        for(ll i=0;i<n;i++){
            cin>>a4[i];
            m4[a4[i]]=i;
        }
        for(ll i=0;i<n;i++){
            cin>>a5[i];
            m5[a5[i]]=i;
        }
        sort(a1,a1+n,compare);
        for(ll i=0;i<n;i++){
            cout<<a1[i]<<" ";
        }
    return 0;
}