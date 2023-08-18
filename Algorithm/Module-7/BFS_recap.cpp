#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
bool visited[N];
vector<int>adj[N];
int level[N];

void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        cout<<"visiting Node->"<<u<<" ";
        q.pop();
        for(auto val:adj[u]){
            if(visited[val])continue;
            q.push(val);
            visited[val]=true;
               level[val]=level[u] + 1;
        }
    }
}

int main()
{
fast;
int v,e;
cin>>v>>e;
for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);

}
bfs(1);
for(int i=1;i<=v;i++){
    cout<<"\n Level of" <<i<<"->";
    cout<<level[i]<<endl;
}
get_out;
}