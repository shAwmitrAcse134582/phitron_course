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
int x=0;
bool ok=false;
//time-complexiety->O(M)
for(char c : s2){
    if(c==s1[x]){
        x++;
    }
    if(x==s1.size()){
        ok=true;
        break;
    }
}
if(ok){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


/***********************************/
// lcs approach O(N*M)
    // int dp[n + 1][m + 1];
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //     {
    //         if (i == 0 || j == 0)
    //             dp[i][j] = 0;
    //     }
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         if (a[i - 1] == b[j - 1])
    //         {
    //             dp[i][j] = dp[i - 1][j - 1] + 1;
    //         }
    //         else
    //         {
    //             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    //         }
    //     }
    // }
    // if (dp[n][m] == a.size())
    //     cout << "YES";
    // else
    //     cout << "NO";
get_out;
}