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
ll k;
cin>>k;
int ans;
int c=0;
ll l=0,r=n-1;
while(l<=r){
    ll mid=(l+r)/2;
    if(a[mid]==k){
       ans=mid;
       c=1;
       break;
    }
    else if(a[mid]<k){
       
         l=mid+1;
    }
    else{
        r=mid-1;
    }
}
if(c){
    cout<<ans<<endl;
}
else{
    cout<<"Not Found"<<endl;
}
get_out;
}