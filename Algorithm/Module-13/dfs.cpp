#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<int>g[N];
bool vis[N];
void dfs(int s){
   vis[s]=true;
   cout<<"visited Node->"<<s<<endl;
//    for(auto child:g[s]){
//            if(!vis[child]){
//             dfs(child);
//            }
//    }
  for(int i=0;i<g[s].size();i++){
    int child=g[s][i];
    if(vis[child]==false){
        dfs(child);
    }
  }
}
int main()
{
fast;
int n,e;
cin>>n>>e;
while(e--){
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
}
dfs(1);
get_out;
}