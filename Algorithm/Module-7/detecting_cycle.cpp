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
bool dfs(int u,int p){
    bool cycleExist=false;
    visited[u]=true;
    for(auto v:adj[u]){
        if(v==p)continue;

        if(visited[v])
        return true;
   cycleExist= cycleExist | dfs(v,u);
    }
    return cycleExist;
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
if(dfs(1,-1)){
    cout<<"cycle Detected"<<endl;
}

cout<<"******************"<<endl;


get_out;
}