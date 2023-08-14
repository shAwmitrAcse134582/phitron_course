#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>vec[N];
bool visited[N];
int level[N];
int parent[N];
void bfs(int u){
  queue<int>q;
  q.push(u);
  visited[u]=true;
  level[u]=0;
  parent[u]=-1;

  while(!q.empty()){
    int f=q.front();
    q.pop();
    for(auto val:vec[f]){
        if(visited[val]==true){
            continue;
        }
        q.push(val);
        visited[val]=true;
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
    vec[u].push_back(v);
    vec[v].push_back(u);

}
int s,d;
cin>>s>>d;
bfs(s);
cout<<"disstance->"<<level[d]<<endl;
for(int i=1;i<=n;i++){
    cout<<"parent of -> "<< i <<"->"<<parent[i]<<endl;
}

vector<int>path;
int current=d;
while(current!=-1){
    path.push_back(current);
    current=parent[current];
}
reverse(path.begin(),path.end());
cout<<"Now the path is-> ";
for(auto node:path){
    cout<<node<<" ";
}
get_out;
}