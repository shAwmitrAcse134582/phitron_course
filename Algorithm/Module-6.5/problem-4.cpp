#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
int depth[N];
bool visited[N];

void dfs(int u){
    visited[u]=true;
    for(auto val : adj[u]){
        if(visited[val]==false){
              //continue;    
         depth[val] = depth[u] + 1;
             dfs(val);
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

dfs(1);
int x;
cin>>x;
cout<<"Depth of "<<x<<'='<<depth[x];

get_out;
}