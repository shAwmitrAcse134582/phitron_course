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
ll n;
cin>>n;
ll a[n+1],dp[n+1];
for(ll i=1;i<=n;i++){
    cin>>a[i];
}
dp[1]=0;
dp[2]=abs(a[2]-a[1]);
for(ll i=3;i<=n;i++){
    ll op1=dp[i-2]+abs(a[i]-a[i-2]);
    ll op2=dp[i-1]+abs(a[i]-a[i-1]);
    dp[i]=min(op1,op2);
}
cout<<dp[n]<<endl;

get_out;
}