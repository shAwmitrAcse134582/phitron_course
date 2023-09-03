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
ll a[n+1];
a[0]=1;
a[1]=1;
for(ll i=2;i<=n;i++){
    a[i]=a[i-1] + a[i-2];
}
cout<<a[n]<<endl;
get_out;
}