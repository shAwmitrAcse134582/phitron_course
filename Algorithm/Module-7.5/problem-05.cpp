#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>G[N];
bool visited[N];
vector<vector<int>>connected_component;
vector<int>current_component;
void dfs(int s){
    visited[s]=true;
    current_component.push_back(s);
     for(auto val:G[s]){
        if(visited[val])continue;
        dfs(val);
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
    G[x].push_back(y);
    G[y].push_back(x);
}
int cc=0;
for(int i=1;i<=v;i++){
    if(visited[i])continue;
    current_component.clear();
    dfs(i);
    connected_component.push_back(current_component);
    cc++;
}
cout<<cc<<endl;
int cnt=1;
for(auto component:connected_component){
    cout<<"component "<<cnt++<<" : ";
    for(auto val:component){
        
        cout<<val<<" ";
    }
    cout<<endl;
}
get_out;
}