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
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  ll x=unique(v.begin(),v.end())-v.begin();
  cout<<n-x<<endl;
}
get_out;
}