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
ll a[n];
ll s=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    s+=a[i];
}
bool dp[n+1][s+1];
dp[0][0]=true;
for(ll i=1;i<=s;i++){
    dp[0][i]=false;

}
for(ll i=1;i<=n;i++){
    for(ll j=0;j<=s;j++){
        if(a[i-1]<=j){
            dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
        }
        else{
            dp[i][j]=dp[i-1][j];
        }
    }
}
vector<int>v;
for(ll i=0;i<=n;i++){
    for(ll j=0;j<=s;j++){
        if(dp[i][j]==1){
            v.push_back(j);
        }
    }
}
ll ans=INT_MAX;
for(auto val : v){
    ll s1=val;
    ll s2=s-s1;
    ans=min(ans,abs(s1-s2));
}
cout<<ans<<endl;
get_out;
}