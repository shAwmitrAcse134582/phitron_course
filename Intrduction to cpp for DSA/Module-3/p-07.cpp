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
ll *a=new ll[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll m;
cin>>m;
ll *b=new ll[m];
for(ll i=0;i<n;i++){
    b[i]=a[i];
}
delete[] a;
for(int i=n;i<m;i++){
    cin>>b[i];
}
for(int i=0;i<m;i++){
    cout<<b[i]<<" ";
}
get_out;
}