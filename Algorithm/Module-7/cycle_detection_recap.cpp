#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];

bool dfs(int s,int p=-1){
    bool cycleExist=false;
    visited[s]=true;
    for(auto val:adj[s]){
        if(val==p)continue;
        if(visited[val])return true;
        cycleExist=cycleExist | dfs(val,s);
    }
    return cycleExist;
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
bool iscycle=false;

// if(dfs(1)){
//     cout<<"cycle detected"<<endl;
// }
// else{
//     cout<<"NO cycle found"<<endl;
// }

     for(int i=1;i<=v;i++){
        if(visited[i])continue;
        iscycle=iscycle|dfs(i);
     }

     if(iscycle){
        cout<<"cycle detected"<<endl;
     }
     else{
        cout<<"NO cycle detected"<<endl;
     }
get_out;
}