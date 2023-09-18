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
ll dp[N];
ll solve(ll a[],ll n){
    if(n==1){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
   else if(n==2){
        return dp[n]=abs(a[2]-a[1]);
    }
   else{
      ll op1=solve(a,n-1)+abs(a[n]-a[n-1]);
      ll op2=solve(a,n-2)+abs(a[n]-a[n-2]);
      return dp[n]=min(op1,op2);
   }
}
int main()
{
fast;
   ll n;
   cin>>n;
   ll a[n+1];
   for(ll i=1;i<=n;i++){
    cin>>a[i];
   }
   memset(dp,-1,sizeof(dp));
  cout<< solve(a,n)<<endl;


get_out;
}