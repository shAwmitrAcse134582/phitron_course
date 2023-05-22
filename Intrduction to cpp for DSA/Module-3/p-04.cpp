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
ll x;
ll mx=INT_MIN;
for(ll i=0;i<t;i++){
    cin>>x;
    mx=max(mx,x);
}
cout<<mx<<endl;
get_out;
}