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
vector<pair<int,int>>adj;
while(e--){
    int u,v;
    cin>>u>>v;
    adj.push_back({u,v});
}
for(int i=0;i<=n;i++){
    cout<<adj[i].first<<" "<<adj[i].second<<endl;
}
get_out;
}