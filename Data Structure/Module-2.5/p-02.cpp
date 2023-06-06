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
vector<ll>v;
for(ll i=0;i<n;i++){
    int x;
    cin>>x;
    v.pb(x);
}
reverse(v.begin(),v.end());

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
v.pop_back();
get_out;
}