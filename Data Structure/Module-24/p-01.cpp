#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    
fast;
ll t;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   vector<ll>v;
   map<ll,ll>mp;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    mp[x]++;

   }
   for(auto val:mp){
    v.push_back(val.first);
   }
   reverse(v.begin(),v.end());
   for(auto val:v){
    cout<<val<<" ";
   }
   cout<<endl;
}
get_out;
}