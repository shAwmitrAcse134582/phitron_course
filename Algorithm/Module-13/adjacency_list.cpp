#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
int n,e;
cin>>n>>e;
vector<int>adj[n+1];
for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
for(int i=1;i<=n;i++){
    cout<<"adjacency list of "<<i<<" : ";
    for(int j=0;j<adj[i].size();j++){
        cout<<adj[i][j]<<" ";

    }
    // for(auto val:adj[i]){
    //     cout<<val<<" ";
    // }
    cout<<endl;
}
get_out;
}