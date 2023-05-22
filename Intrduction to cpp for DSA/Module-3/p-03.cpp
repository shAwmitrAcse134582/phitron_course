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
ll a[t];
for(ll i=0;i<t;i++){
    cin>>a[i];
}
for(ll i=0;i<t-1;i++){
    for(ll j=i+1;j<t;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
}
for(ll i=0;i<t;i++){
    cout<<a[i]<<" ";
}
get_out;
}