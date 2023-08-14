#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<int>adj[N];
vector<bool>visited(N,false);
void dfs(int u){
    visited[u]=true;
    for(auto val:adj[u]){
        if(visited[val])continue;
        dfs(val);
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
vector<int>vec;
for(ll i=1;i<=n;i++){
    if(visited[i])continue;
    vec.push_back(i);
    dfs(i);
}
cout<<vec.size()-1<<endl;
for(int i=1;i<vec.size();i++){
    cout<<vec[i-1]<<" "<<vec[i]<<endl;
}

get_out;
}