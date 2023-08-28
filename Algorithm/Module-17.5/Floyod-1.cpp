#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int INF=1e7+3;
int main()
{
fast;
int n;
cin>>n;
int dis[n+1][n+1];
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
            if(dis[i][j]>dis[i][k]+dis[k][j]){
                dis[i][j]=dis[i][k]+ dis[k][j];
            }
        }
    }
}


for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       cout<<dis[i][j]<<" ";
    }
    cout<<endl;
}
get_out;
}