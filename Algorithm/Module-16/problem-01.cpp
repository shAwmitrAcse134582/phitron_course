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
vector<pair<ll,ll>>v;
while(t--)
{
   ll a,b;
   cin>>a>>b;
   v.push_back({a,b});

}
sort(v.begin(),v.end());
for(auto val:v){
    cout<<val.first<<" "<<val.second<<endl;
}
get_out;
}