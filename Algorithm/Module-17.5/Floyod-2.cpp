#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int INF=1e7+5;
int main()
{
fast;
int n;
cin>>n;
int dis[n+1][n+1];
int a[n+1][n+1];
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>dis[i][j];
    }
}


// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//          if(i==j){
//             dis[i][j]=0;
//          }
//          else{
//             dis[i][j]=INF;
//          }
//     }
// }
for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dis[i][j]==-1){
                dis[i][j]=INF;
            }
            if(dis[i][j]>dis[i][k]+dis[k][j]){
                dis[i][j]=dis[i][k]+ dis[k][j];
            }
        }
    }
}

int mx=INT_MIN;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(dis[i][j]!=INF)
    //    cout<<dis[i][j]<<" ";
    mx=max(mx,dis[i][j]);
    }
    // cout<<endl;

}
cout<<mx<<endl;
get_out;
}