#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
bool ok=false;
int dp[N];
ll x;
ll solve(ll n)
{
    if(n > x) return 0;
	if(n == x) return 1;
	
	if(dp[n] != -1) 
    return dp[n];
	
	ll ck = 0;
	if(n + 3 <= x)
     ck = max(ck, solve(n + 3));

	if(n * 2 <= x)
    ck = max(ck, solve(n * 2));
	return dp[n] = ck;

}
int main()
{
fast;
ll t;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
   x = n;
 memset(dp, -1, sizeof dp);
 if(solve(1)) 
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
}
get_out;
}