#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<pair<int,int>>g[N];
int dis[N];
bool vis[N];

void dijkstra(int s){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
     dis[s]=0;
    pq.push({dis[s],s});
   
    while(!pq.empty()){
          pair<int,int> parent=pq.top();
          pq.pop();
          int parentCost=parent.first;
          int parentNode=parent.second;
          if(vis[parentNode])continue;
          vis[parentNode]=true;
          for(auto child:g[parentNode]){
            int childNode=child.first;
            int childCost=child.second;
            if(dis[childNode]>parentCost+childCost){
                dis[childNode]=parentCost+childCost;
                pq.push({dis[childNode],childNode});
            }
            
          }

    }
}
int main()
{
fast;
int n,e;
cin>>n>>e;
while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    g[u].push_back({v,w});
    g[v].push_back({u,w});
    
}
for(int i=1;i<=n;i++){
    dis[i]=INT_MAX;
}
dijkstra(1);

for(int i=1;i<=n;i++){
    cout<<"disance of "<<i<<"->"<<dis[i]<<endl;
}

get_out;
}