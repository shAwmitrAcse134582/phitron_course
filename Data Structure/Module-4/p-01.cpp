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
sort(v.begin(),v.end());
bool ok=false;
for(ll i=0;i<n-1;i++){
    if(v[i]==v[i+1]){
      ok=true;
      break;
    }
}
if(ok){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
get_out;
}