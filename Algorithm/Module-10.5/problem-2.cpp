#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
const int inf=1e9+3;
vector<pair<int,int>>g[N];
vector<ll>dist(N,inf);
vector<bool>visit(N,false);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
void  dijkstra(int s){
    dist[s]=0;
    pq.push({dist[s],s});
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        visit[u]=true;
        for(pair<int,int>vp:g[u]){
            int v=vp.first;
            int w=vp.second;
            if(visit[v])continue;
                if(dist[v]>dist[u]+w){
                    dist[v]=dist[u]+w;
                }
                pq.push({dist[v],v});
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
    g[u].push_back({v,w});

}
int s,d;
cin>>s>>d;
dijkstra(s);
cout<<"distance->"<<dist[d]<<endl;
get_out;
}