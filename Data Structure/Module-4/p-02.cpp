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
vector<ll>pre(n);
pre[0]=v[0];
for(ll i=1;i<n;i++){
    pre[i]=v[i]+pre[i-1];
}
reverse(pre.begin(),pre.end());
for(ll i=0;i<n;i++){
    cout<<pre[i]<<" ";
}
pre.pop_back();
get_out;
}