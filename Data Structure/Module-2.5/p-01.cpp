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
vector<ll>v1;
vector<ll>v2;
vector<ll>v3;
for(ll i=0;i<n;i++)
{
    int x;
    cin>>x;
    v1.pb(x); 
}

for(ll i=0;i<n;i++)
{ 
    int y;
    cin>>y;
   v2.pb(y);
   v3.pb(v2[i]);
}
for(int i=0;i<n;i++){
    v3.pb(v1[i]);
}
for(int i=0;i<2*n;i++){
    cout<<v3[i]<<" ";
}
v3.pop_back();


get_out;
}