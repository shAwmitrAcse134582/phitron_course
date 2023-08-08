#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<int>adj[N];
bool visited[N];
void dfs(int u){
    visited[u]=true;
    for(int v : adj[u]){
               if(visited[v]==true)
        continue;
        dfs(v);
        
    }
    cout<<u<<endl;
   

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
dfs(1);


get_out;
}