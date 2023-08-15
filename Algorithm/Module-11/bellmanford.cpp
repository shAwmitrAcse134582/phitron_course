#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0

#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

typedef pair<int,int>pii;

const int N=1e5+3;
const int INF=1e9+7;
vector<pii>g[N];
vector<pair<pii,int>>list_of_edge;
int dis[N];
int n,m;

void bellmanford(int s){
for(int i=1;i<=n;i++){
     dis[i]=INF;
}
  dis[s]=0;
  for(int i=1;i<n;i++){
      for(int u=1;u<=n;u++){
        for(pii vpair:g[u]){
            int v=vpair.first;
            int w=vpair.second;
            if(dis[u]!=INF && dis[v]>dis[u]+w){
            dis[v]=dis[u]+w; 
            }
        }
      }
  }
}
int main()
{
fast;

cin>>n>>m;
while(m--){
    int u,v,w;
    cin>>u>>v>>w;
    g[u].push_back({v,w});

}
bellmanford(1);

for(int i=1;i<=n;i++){
    cout<<"distance of->"<<i<<"->"<<dis[i]<<endl;
}

get_out;
}