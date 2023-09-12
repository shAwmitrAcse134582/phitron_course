class Solution {
public:
    int coinChange(vector<int>& coins, int m) {
        int n=coins.size();
        int dp[n+1][m+1];
        dp[0][0]=0;
        for(int i=1;i<=m;i++){
            dp[0][i]=INT_MAX-1;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if(dp[n][m]==INT_MAX-1)
          return -1;
          else
          return dp[n][m];
    }
};