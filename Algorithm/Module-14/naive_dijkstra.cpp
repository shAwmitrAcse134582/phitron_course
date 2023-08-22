#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<pair<int,int>>g[N];
int dis[N];

void  dijkstra(int s){
    queue<int>q;
    q.push(s);
    dis[s]=0;
    while(!q.empty()){
        int parent=q.front();
        q.pop();
        for(int i=0;i<g[parent].size();i++){
            pair<int,int>child=g[parent][i];
            int childNode=child.first;
            int childCost=child.second;
            if(dis[parent]+childCost<dis[childNode]){
             dis[childNode]=dis[parent]+childCost;
             q.push(childNode);
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