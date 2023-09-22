#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n],b[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
}
sort(b,b+n);
ll x=b[n-1];
ll y=b[n-2];
// cout<<x<<" "<<y<<endl;
ll p,q;
for(ll i=0;i<n;i++){
    if(x==a[i]){
        p=i;
    }
    if(y==a[i]){
        q=i;
    }
}

cout<<min(p,q)<<" "<<max(p,q)<<endl;
    
}
get_out;
}