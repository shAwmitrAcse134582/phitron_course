#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int  N=1e3+5;
vector<int>g[N];
bool vis[N];
int level[N];
int parent[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    level[s]=0;
    parent[s]=-1;
    vis[s]=true;
    while(!q.empty()){
        int f=q.front();
        // cout<<"visited Node->"<<f<<endl;
        q.pop();
        for(auto val:g[f]){
            if(vis[val])continue;
            q.push(val);
            vis[val]=true;
            level[val]=level[f]+1;
            parent[val]=f;
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
    g[u].push_back(v);
    g[v].push_back(u);

}

int s,d;
cin>>s>>d;

bfs(s);

//finding all level's node
// for(int i=1;i<=n;i++){
//     cout<<"level of->"<<i<<"->"<<level[i]<<endl;
// }

//finding all parents Node
// for(int i=1;i<=n;i++){
//     cout<<"parent of->"<<i<<"->"<<parent[i]<<endl;
// }

cout<<"distance->"<<level[d]<<endl;
vector<int>path;

int tmp=d;
while(tmp!=-1){
    path.push_back(tmp);
    tmp=parent[tmp];

}
reverse(path.begin(),path.end());
cout<<"shortest path : ";
for(auto val:path){
    cout<<val<<" ";
}

get_out;
}