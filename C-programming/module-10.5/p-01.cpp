#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll x,y;
ll mn=*min_element(a,a+n);
ll mx=*max_element(a,a+n);

for(ll i=0;i<n;i++){
    if(mn==a[i]){
        x=i;
    }
    if(mx==a[i]){
        y=i;
    }
}
// cout<<x<<" "<<y<<endl;
swap(a[x],a[y]);
//  cout<<x<<" "<<y<<endl;

for(ll i=0;i<n;i++){
    cout<<a[i]<<" ";
}
get_out;
}