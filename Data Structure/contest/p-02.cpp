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
  ll a[n];

  map<ll,ll>mp;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
  }
  for(auto val:mp){
    if(val.second%2!=0){
        cout<<val.first<<endl;
    }
  }
}
get_out;
}