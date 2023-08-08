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
//    section-1:action just after entering  Node U
visited[u]=true;
cout<<"Visiting Node: "<<u<<endl;
for(int v : adj[u]){
    //section-2 : after before entering a new Neighbour
    if(visited[v]==true)
    continue;
    dfs(v);
    //section-3:actions after exiting a neighbour
}
//section-4:actions before exiting Node u
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
// for(int i=1;i<=n;i++){
//     cout<<"List "<< i<<" : ";
//     for(auto j:adj[i]){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
dfs(1); 

cout<<"Visiting array"<<endl;
for(int i=1;i<=n;i++){
    cout<<" Node "<< i <<" status: "<<visited[i]<<endl;
}
get_out;
}