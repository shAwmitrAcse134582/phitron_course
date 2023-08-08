#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<int>adj[N];
bool visited[N];
int depth[N];
int height[N];


void DFS(int u){
visited[u]=true;
cout<<"Visited:  "<<u<<endl;
for(auto v:adj[u]){
    if(visited[v] == true)
    continue;
    depth[v]=depth[u]+1;
    DFS(v);
    // if(height[v]+1>height[u]){
    //     height[u]=height[v]+1;
    // }
    height[u]=max(height[u],height[v]+1);

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
DFS(1);
for(int i=1;i<=n;i++){
    cout<<" Depth of Node "<< i <<": "<<depth[i]<<endl;
}
cout<<"*************"<<endl;
for(int i=1;i<=n;i++){
    cout<<" height of Node "<< i <<": "<<height[i]<<endl;
}
get_out;
}