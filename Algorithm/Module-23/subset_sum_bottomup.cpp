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
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll s;
cin>>s;
bool dp[n+1][s+1];
dp[0][0]=true;
for(int i=1;i<=s;i++){
    dp[0][i]=false;
}
for(int i=1;i<=s;i++){
    for(int j=0;j<=s;j++){
        if(a[i-1]<=j){
            dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
        }
        else{
            dp[i][j]=dp[i-1][j];
        }
    }
}
for(int i=0;i<=n;i++){
    for(int j=0;j<=s;j++){
        if(dp[i][j]){
            cout<<"T ";
        }
        else{
         cout<<"F ";
        }
    }
    cout<<endl;
}
get_out;
}