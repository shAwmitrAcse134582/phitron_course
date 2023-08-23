#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
int dis[N];
bool vis[N];
vector<int>g[N];
vector<int>cmp;

void dfs(int s){
    vis[s]=true;
    cmp.push_back(s);
    for(auto child : g[s]){
        if(!vis[child]){
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
int cnt=0;
for(int i=1;i<=n;i++)
{
    if(!vis[i]){
        cnt++;
        dfs(i);
        for(auto val:cmp){
            cout<<val<<" ";
        }
        cout<<endl;
        cmp.clear();
    }
}

cout<<cnt<<endl;
get_out;
}