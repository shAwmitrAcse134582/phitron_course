#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];
int cnt=0;
void bfs(int u){
    queue<int>q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        cnt++;
        for(auto v:adj[t]){
            if(visited[v]==true)
                continue;
               q.push(v);
                visited[v]=true;
            
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
    
}
int p;
cin>>p;
bfs(p);
cout<<cnt-1<<endl;


get_out;
}