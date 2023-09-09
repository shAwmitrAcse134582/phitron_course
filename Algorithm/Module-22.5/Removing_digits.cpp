#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+7;
vector<int>dp(N,INT_MAX);
 int solve(int n){
    if(n==0)return 0;
    if(dp[n]!=INT_MAX){
        return dp[n];
    }
    vector<int>d;
    for(auto ch : to_string(n)){
        d.push_back(ch-'0');
    }
    for(auto val : d){
        dp[n]=min(dp[n],solve(n-val)+1);
    }
    return dp[n];
 }
int main()
{
fast;
ll n;
cin>>n;
cout<<solve(n)<<endl;
get_out;
}