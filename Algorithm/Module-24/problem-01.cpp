#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
  int knapsack(int n,int s,int v[],int w[])
    {
        int dp[n+1][s+1];
        for (int i=0;i<=n;i++)
        {
            for (int j=0; j<=s;j++)
            {
                if (i==0||j==0)
                    dp[i][j] = 0;
            }
        }
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=s;j++)
            {
                if (w[i - 1] <=j)
                {
                    dp[i][j]= max(dp[i-1][j- w[i - 1]] + v[i - 1], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][s];
    }
int main()
{
fast;
ll t;
cin>>t;
while(t--)
{
   int  n,s;
   cin>>n>>s;
   int v[n],w[n];
   for(ll i=0;i<n;i++){
    cin>>w[i];
   }
   for(ll j=0;j<n;j++){
    cin>>v[j];
   }
   cout<<knapsack(n,s,v,w)<<endl;
   
}
get_out;
}