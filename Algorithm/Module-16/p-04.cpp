#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+3;
vector<pair<ll,ll>>g[N];
int dis[N];
bool vis[N];


void dijkstra(int s){
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
     dis[s]=0;
    pq.push({dis[s],s});
   
    while(!pq.empty()){
          pair<ll,ll> parent=pq.top();
          pq.pop();
          ll parentCost=parent.first;
          ll parentNode=parent.second;
          if(vis[parentNode])continue;
          vis[parentNode]=true;
          for(auto child:g[parentNode]){
            int childNode=child.first;
            int childCost=child.second;
            
            if(dis[childNode]>parentCost+childCost){
                dis[childNode]=parentCost+childCost;
               
                pq.push({dis[childNode],childNode});
            }
            
          }

    }
}
int main()
{
fast;
ll n,e;
cin>>n>>e;
while(e--){
    ll u,v,w;
    cin>>u>>v>>w;
    g[u].push_back({v,w});
    // g[v].push_back({u,w});
    
}
int s;
cin>>s;
for(ll i=0;i<=n;i++){
    dis[i]=INT_MAX;
}
dijkstra(s);
ll q;
cin>>q;
while(q--){
    ll a,b;
    cin>>a>>b;
if(dis[a]<=b)
cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}



}
// for(auto val:vec){
//     cout<<val<<endl;
// }
// for(int i=1;i<=n;i++){
//     cout<<"disance of "<<i<<"->"<<dis[i]<<endl;
// }

get_out;
}