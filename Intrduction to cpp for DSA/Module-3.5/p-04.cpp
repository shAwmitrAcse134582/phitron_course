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
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  ll mn=INT_MAX;
  for(ll i=0;i<n-1;i++){
    for(ll j=i+1;j<n;j++){
          ll x=a[i]+a[j]+j-i;
          mn=min(mn,x);
    }
  }
  cout<<mn<<endl;
}
get_out;
}