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
ll l=0,r=n-1;
ll c=0;
while(l<=r){
    if(a[l]!=a[r]){
        c=1;
        break;
    }
    l++;
    r--;
}
if(c==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


get_out;
}