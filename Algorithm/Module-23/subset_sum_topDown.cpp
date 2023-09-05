#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
ll dp[1005][1005];
bool subsetSum(ll n,ll a[],ll s){
  if(n==0){
    if(s==0)return true;
    else return false;
  }
  if(dp[n][s]!=-1){
    return dp[n][s];
  }
  if(a[n-1]<=s){
    bool op1=subsetSum(n-1,a,s-a[n-1]);
    bool op2=subsetSum(n-1,a,s);
    return dp[n][s]=op1 || op2;
  }
  else{
    return dp[n][s]=subsetSum(n-1,a,s);
  }
}
int main()
{
fast;
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll s;
cin>>s;
for(ll i=0;i<=n;i++){
    for(ll j=0;j<=s;j++){
        dp[i][j]=-1;
    }
}
if(subsetSum(n,a,s)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
get_out;
}