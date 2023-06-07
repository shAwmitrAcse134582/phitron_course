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
while(q--){
    ll l,r;
    cin>>l>>r;
    l--;
    r--;
    ll sum=0;
    for(int i=l;i<=r;i++){
       sum+=v[i];
    }
    cout<<sum<<endl;
}
get_out;
}