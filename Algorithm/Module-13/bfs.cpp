#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<int>g[N];
vector<int>dis(N);
bool vis[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=true;
    dis[s]=0;
    while(!q.empty()){
        int parent=q.front();
        q.pop();
        cout<<parent<<endl;
        for(int i=0;i<g[parent].size();i++){
           int child=g[parent][i];
           if(vis[child]==false){
            q.push(child);
            dis[child]=dis[parent]+1;
            vis[child]=true;
           }

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
bfs(1);
for(int i=1;i<=n;i++){
    cout<<"distance of "<<i<<"->"<<dis[i]<<endl;
}

get_out;
}