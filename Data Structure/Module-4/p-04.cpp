#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n;
cin>>n;
vector<ll>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
ll m;
cin>>m;
vector<ll>v2(m);
for(ll i=0;i<m;i++){
    cin>>v2[i];
}
ll x;
cin>>x;
v.insert(v.begin()+x,v2.begin(),v2.end());
for(ll i=0;i<n+m;i++){
    cout<<v[i]<<" ";
}
v.pop_back();
get_out;
}