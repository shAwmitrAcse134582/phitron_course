#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
ll dp[1005][1005];
bool subsetSum(ll n,ll marks,ll a[]){
    if(n==0){
        if(marks==0){
            return true;
        }
        else{
            return false;
        }
    }
    if(dp[n][marks]!=-1){
        return dp[n][marks];
    }
    if(a[n-1]<=marks){
        bool ch1=subsetSum(n-1,marks-a[n-1],a);
        bool ch2=subsetSum(n-1,marks,a);
        return dp[n][marks]=ch1 || ch2;
    }
    else{
        return dp[n][marks]=subsetSum(n-1,marks,a);
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
  ll marks=1000-m;
  for(ll i=0;i<=n;i++){
    for(ll j=0;j<=marks;j++){
        dp[i][j]=-1;
    }
  }
  if(subsetSum(n,marks,a)){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

}
get_out;
}