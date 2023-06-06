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

for(int i=0;i<n;i++){
    int x;
    cin>>x;
     v1.pb(x);
}
for(int i=0;i<n;i++){
    int y;
    cin>>y;
    v2.pb(y);
}
vector<ll>v3(v2);
v3.insert(v3.begin()+n,v1.begin(),v1.end());

for(int i=0;i<2*n;i++)
{
   cout<<v3[i]<<" ";
}
v3.pop_back();
get_out;
}