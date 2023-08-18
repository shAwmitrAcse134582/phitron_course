#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
int height[N];
bool visited[N];
void dfs(int u)
{
    visited[u]=true;
    for(auto val:adj[u]){
        if(visited[val])continue;
        dfs(val);
        height[u]=max(height[u],height[val]+1);
    }
} 


int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    int x;
    cin >> x;

    cout << "Height of " << x << " = " << height[x];
}