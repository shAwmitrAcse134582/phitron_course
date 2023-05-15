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
ll mx=INT_MIN;
ll c=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    while(a[i]%2!=1){
        a[i]=a[i]/2;
        
        c++;
         
    }
    mx=max(c,mx);
    c=0;
   
}
cout<<mx<<endl;
get_out;
}