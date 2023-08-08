#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];
int level[N];
void dfs(int u){
    visited[u]=true;
    for(auto v:adj[u]){
        if(visited[v])
        continue;
        dfs(v);
    }
}
void bfs(int u){
    queue<int>q;
    q.push(u);
    visited[u]=true;
    
    while(!q.empty()){
        //pop a node  from the queue ans insert unvisited neighbour of that Node
        int t=q.front();
        q.pop();
        // cout<<"visiting Node: "<<t<<endl;
        for(auto v:adj[t]){ 
            if(visited[v]==true)
                continue;
               q.push(v);
                visited[v]=true;
                
            
        }
    }


}
int main()
{
fast;
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int cc=0;
for(int i=1;i<=n;i++){
  if(visited[i])
  continue;
  dfs(i);
  cc++;
}
cout<<"******************"<<endl;
cout<<"Number of connected componest : "<<cc<<endl;

get_out;
}