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
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll l=0;
ll r=n-1;
if(n%2==0){
while(l<=r){
    cout<<a[l]<<" "<<a[r]<<" ";
    l++;
    r--;
}
}
else{
    while(l<r){
    cout<<a[l]<<" "<<a[r]<<" ";
    l++;
    r--;
}
cout<<a[n/2]<<endl;
}

get_out;
}