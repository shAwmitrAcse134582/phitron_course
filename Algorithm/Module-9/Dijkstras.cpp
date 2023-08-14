#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
const int inf=1e9+10;
vector<pair<int,int>>adj[N];
vector<int>dist(N,inf);
bool visited[N];
void dijkstra(int s){
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    dist[s]=0;
     pq.push({dist[s],s});
     while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        visited[u] = true;
        for(pair<int,int>vp:adj[u]){
            int v=vp.first;
            int w=vp.second;
            if(visited[v])
                    continue;
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
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
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});

}
dijkstra(1);
for(int i=1;i<=n;i++){
    cout<<"distance of Node "<< i<<"->";
    cout<<dist[i]<<endl;
}
get_out;
}