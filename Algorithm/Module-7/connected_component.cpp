#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];
void dfs(int s){
    visited[s]=true;
    for(auto val:adj[s]){
        if(visited[val])continue;
        dfs(val);
    }
}
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto val:adj[u]){
            if(visited[val])continue;
            q.push(val);
            visited[val]=true;
        }
    }
}
int main()
{
fast;
int v,e;
cin>>v>>e;
for(int i=0;i<e;i++){
    int n,m;
    cin>>n>>m;
    adj[n].push_back(m);
    adj[m].push_back(n);

}
int cc=0;
for(int i=1;i<=v;i++){
    if(visited[i])continue;
    // dfs(i);
    bfs(i);
    cc++;
}
cout<<"connected component->"<<cc<<endl;

get_out;
}