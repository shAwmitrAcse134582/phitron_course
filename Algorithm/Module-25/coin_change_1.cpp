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
ll w[n];
for(ll i=0;i<n;i++){
    cin>>w[i];
}
ll s;
cin>>s;

ll dp[n+1][s+1];
dp[0][0]=1;
for(ll i=1;i<=s;i++){
    dp[0][i]=0;
}
for(ll i=1;i<=n;i++){
    for(ll j=0;j<=s;j++){
        if(w[i-1]<=j){
            dp[i][j]=dp[i][j-w[i-1]] + dp[i-1][j];
        }
        else{
            dp[i][j]=dp[i-1][j];
        }
    }
}
cout<<dp[n][s]<<endl;

get_out;
}