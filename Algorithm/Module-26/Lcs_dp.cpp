#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int dp[1003][1003];
int lcs(string s1,int n,string s2,int m){
    if(n==0 || m==0)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    if(s1[n-1]==s2[m-1]){
      int ans=lcs(s1,n-1,s2,m-1);
      return dp[n][m] = ans+1;
    }
    else{
        int ans1=lcs(s1,n-1,s2,m);
        int ans2=lcs(s1,n,s2,m-1);
        return dp[n][m] = max(ans1,ans2);
    }
}
int main()
{
fast;
string s1,s2;
cin>>s1>>s2;
memset(dp,-1,sizeof(dp));
cout<<lcs(s1,s1.size(),s2,s2.size())<<endl;
get_out;
}