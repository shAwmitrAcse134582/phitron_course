#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=10001;
vector<int>adj[N];
bool visited[N];
vector<int>V;
int cnt=0;
void dfs(int u){
visited[u]=true;
cnt++;
for(int v : adj[u]){  
    if(visited[v]==true)
    continue;
    dfs(v);   
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
for(int i=0;i<N;i++){
        if(visited[i]==false){
            cnt=0;
            dfs(i);
            if(cnt>1){
                V.push_back(cnt);  
            }
        }
    }
sort(V.begin(),V.end());
    for(int val: V){
        cout<<val<< " ";
    }
get_out;
}