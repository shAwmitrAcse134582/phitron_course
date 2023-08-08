#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
// for unweighted Graph
// vector<int>adj[N];

//for weighted graph
vector<pair<int,int>>adj[N];
int main()
{
fast;
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back({u,w});  
}
for(int i=1;i<=n;i++){
   cout<<"List "<< i << ": ";
   for(auto j:adj[i]){
    cout<<"( "<<j.first<<" , "<<j.second<<") ";
   }
   cout<<endl;
}
get_out;
}