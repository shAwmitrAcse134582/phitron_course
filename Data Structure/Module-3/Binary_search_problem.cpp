#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n,q;
cin>>n>>q;
vector<ll>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
while(q--){
    ll x;
    cin>>x;
    bool ok=false;
    ll l=0,r=n-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(v[mid]==x){
          ok=true;
          break;
        }
        else if(v[mid]<x){
            l=mid+1;
        }
        else{
            r= mid-1;
        }
    }
if(ok){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
    
}
get_out;
}