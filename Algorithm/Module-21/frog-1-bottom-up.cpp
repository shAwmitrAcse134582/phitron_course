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
ll cost[n+1],dp[n];
for(ll i=1;i<=n;i++){
    cin>>cost[i];
}
dp[1]=0;
dp[2]=abs(cost[2]-cost[1]);
for(ll i=3;i<=n;i++){
    ll choice1=dp[i-2]+abs(cost[i]-cost[i-2]);
    ll choice2=dp[i-1]+abs(cost[i]-cost[i-1]);
    dp[i]=min(choice1,choice2);
}
cout<<dp[n]<<endl;
get_out;
}