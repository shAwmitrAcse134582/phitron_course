#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>G[N];
bool  visited[N];
void dfs(int u){
    visited[u]=true;
    cout<<u<<" ";
    for(auto val:G[u]){
        if(visited[val]==true)continue;
        dfs(val);
    }
}
int main()
{
fast;
int v,e;
cin>>v>>e;
for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    G[u].push_back(v);
    // G[v].push_back(u);

}
dfs(1);
get_out;
}