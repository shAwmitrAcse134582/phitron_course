#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define pii pair<int,int>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
const int INF=1e9+7;
vector<pii>G[N];
vector<int>dis(N,INF);
bool vis[N];
int parent[N];


void dijkstra(int s){
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    dis[s]=0;
    pq.push({dis[s],s});
    parent[s]=-1;
    vis[s]=true;
    while(!pq.empty()){
        int u=pq.top().second;
        vis[u]=true;
        pq.pop();
        for(auto node:G[u]){
            int v=node.first;
            int w=node.second;
            if(vis[v])continue;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                pq.push({dis[v],v});
                parent[v]=u;
            }
        }
    }

}

int main()
{
fast;
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    G[u].push_back({v,w});
    G[v].push_back({u,w});

}
int s,d;
cin>>s>>d;
dijkstra(s);
if(!vis[d]){
    cout<<-1<<endl;
    return 0;
}
int tmp=d;
vector<int>path;
while(tmp!=-1){
    path.push_back(tmp);
    tmp=parent[tmp];
}
reverse(path.begin(),path.end());
for(auto val:path){
    cout<<val<<" ";
}





// for(int i=1;i<=n;i++){
//     cout<<"distance of "<<i<<"->"<<dis[i]<<endl;
// }


get_out;
}