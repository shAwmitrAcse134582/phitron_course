#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
ll dp[N];
ll solve(ll a[],int n){
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
    int choice1=solve(a,n-1)+abs(a[n]-a[n-1]);
    int choice2=solve(a,n-2)+abs(a[n]-a[n-2]);
    return dp[n]=min(choice1,choice2);
   }
}
int main()
{
fast;
ll n;
cin>>n;
ll a[n+1];
for(ll i=1;i<=n;i++){
   dp[i]=-1;
   cin>>a[i];
}
cout<<solve(a,n);
get_out;
}