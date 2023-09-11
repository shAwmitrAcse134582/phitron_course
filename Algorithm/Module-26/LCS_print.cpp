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
string s1,s2;
cin>>s1>>s2;
int n=s1.size();
int m=s2.size();
int dp[n+1][m+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        if(i==0 || j==0){
            dp[i][j]=0;
        }
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(s1[i-1] == s2[j-1]){
            dp[i][j]=dp[i-1][j-1]+1;
        }
        else{
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

        }
    }
}
int i=n,j=m;
string ans;
while(i!=0 && j!=0){
    if(s1[i-1]==s2[j-1]){
        ans+=s1[i-1];
        i--;
        j--;
    }
    else{
        if(dp[i][j-1]>dp[i-1][j]){
            j--;
        }
        else{
            i--;
        }
    }
}
reverse(ans.begin(),ans.end());
cout<<ans<<endl;

get_out;
}