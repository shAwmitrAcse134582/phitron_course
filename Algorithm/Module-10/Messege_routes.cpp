#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<int>adj[N];
vector<bool>visited(N,false);
vector<int>level(N,0);
vector<int>parent(N,-1);
void bfs(int s){
    queue<int>q;
    q.push(s);
    level[s]=0;
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto val:adj[u]){
            if(visited[val])continue;
            q.push(val);
            visited[val]=true;
            parent[val]=u;
            level[val]=level[u]+1;
        }
    }
}
int main()
{
fast;
ll n,m;
cin>>n>>m;
for(ll i=0;i<m;i++){
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bfs(1);
if(level[n]<1){
    cout<<"IMPOSSIBLE"<<endl;
}
cout<<level[n]+1<<endl;
ll cur=n;

vector<int>path;
while(cur!=-1){
    path.push_back(cur);
    cur=parent[cur];
}
reverse(path.begin(),path.end());
for(auto p:path){
    cout<<p<<" ";
}
get_out;
}