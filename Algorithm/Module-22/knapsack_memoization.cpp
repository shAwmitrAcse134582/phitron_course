#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int dp[1005][1005];
int knapsack(int n,int s,int v[],int w[]){
    if(n==0 || s==0)
    return 0;
    if(dp[n][s]!=-1){
        return dp[n][s];
    }
    if(w[n-1]<=s){
        int ch1=knapsack(n-1,s-w[n-1],v,w) + v[n-1];
        int ch2=knapsack(n-1,s,v,w);
        return max(ch1,ch2);
        return dp[n][s]=max(ch1,ch2);

    }
    else{
        return dp[n][s] = knapsack(n-1,s,v,w);
    }
}
int main()
{
fast;
int n;
cin>>n;
int v[n],w[n];
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=0;i<n;i++){
    cin>>w[i];
}
int s;
cin>>s;
for(int i=0;i<=n;i++){
    for(int j=0;j<=s;j++){
        dp[i][j]=-1;
    }
}
cout<<knapsack(n,s,v,w);
get_out;
}