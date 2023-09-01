#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const ll INF=1e18+5;

int main()
{
fast;
ll n,e;
cin>>n>>e;
ll dis[n+1][n+1];
for(ll i=1;i<=n;i++){
    for(ll j=1;j<=n;j++){
        dis[i][j]=INF;
        if(i==j){
            dis[i][j]=0;
        }
    }
}
ll mn=LONG_MAX;
bool ok=false;
while(e--){
    ll u,v,w;
    cin>>u>>v>>w;
    if(dis[u][v]>w)
    dis[u][v]=w;
}


for(ll k=1;k<=n;k++){
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(dis[i][k]==LONG_MAX || dis[k][j]==LONG_MAX)continue;
            if(dis[i][k]+dis[k][j]<dis[i][j]){
                dis[i][j]=dis[i][k]+ dis[k][j];
            }
        }
    }
}


ll q;
cin>>q;
while(q--){
    ll s,d;
    cin>>s>>d;
   if(dis[s][d]!=INF)
   cout<<dis[s][d]<<endl;
   else
   cout<<-1<<endl;
}

get_out;
}