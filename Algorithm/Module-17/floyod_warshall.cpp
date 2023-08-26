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
int n,e;
cin>>n>>e;
int dis[n+1][n+1];
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        dis[i][j]=INF;
        if(i==j){
            dis[i][j]=0;
        }
    }
}
while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    dis[u][v]=w;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(dis[i][j]==INF){
            cout<<"INF"<<" ";
        }
        else{
            cout<<dis[i][j]<<" ";
        }
        
    }
    cout<<endl;
}

for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dis[i][k]+dis[k][j]<dis[i][j]){
                dis[i][j]=dis[i][k]+ dis[k][j];
            }
        }
    }
}

cout<<"Updated"<<endl;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(dis[i][j]==INF){
            cout<<"INF"<<" ";
        }
        else{
            cout<<dis[i][j]<<" ";
        }
        
    }
    cout<<endl;
}

get_out;
}