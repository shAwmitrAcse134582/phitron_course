#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll dp[1005][1005];
const int N=1e5+7;
const int Mod=1e9+7;
ll solve(ll n,ll s,ll a[]){
     if(n==0){
        if(s==0)return 1;
        else{
            return 0;
        }
     }
     if(dp[n][s]!=-1)
       return dp[n][s];
       if(a[n-1]<=s){
        int ch1=solve(n-1,s-a[n-1],a);
        int ch2=solve(n-1,s,a);
        return dp[n][s]=(ch1+ch2)%Mod;
       }
       else{
        return dp[n][s]=solve(n-1,s,a)%Mod;
       }
}
int main()
{
fast;
ll t;
cin>>t;
while(t--)
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll s=1000-m;
    memset(dp,-1,sizeof(dp));
    cout<<solve(n,s,a)<<endl;
}
get_out;
}