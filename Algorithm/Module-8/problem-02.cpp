#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<int>adj[N];
bool visited[N];
int level[N];
vector<int>v;
void bfs(int u,int x){
    queue<int>q;
    q.push(u);
    visited[u]=true;
    level[u]=0;
    while(!q.empty()){
       
        int t=q.front();
        q.pop();
        if(level[t]==x){
            v.push_back(t);
        }
       
        for(auto val:adj[t]){
            if(visited[val]==true)
                continue;
               q.push(val);
                visited[val]=true;
                level[val]=level[t]+1;
            
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
int x;
cin>>x;
bfs(0,x);

sort(v.begin(),v.end());

if(v.size()==0){
    cout<<-1<<endl;
}
else{
    for(auto val:v){
        cout<<val<<" ";
    }
}

get_out;
}