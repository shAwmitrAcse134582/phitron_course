#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll  n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
int v;
for(int i=n-1;i>=0;i--){
    if(a[i]==0){
       v=i;
       break;
    }
}
reverse(a,a+v);
for(ll i=0;i<n;i++){
    cout<<a[i]<<" ";
}
get_out;
}