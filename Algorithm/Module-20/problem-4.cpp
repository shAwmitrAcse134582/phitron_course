#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const ll INF=1e18+5;
const ll N=1e3+5;
class Edge{
    public:
    ll u;
    ll v;
    ll w;
    Edge(ll u,ll v,ll w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int main()
{
fast;
ll n,e;
cin>>n>>e;
vector<Edge>vec;
while(e--){
    ll u,v,w;
    cin>>u>>v>>w;
    Edge ed(u,v,w);
    vec.push_back(ed);  
}
ll dis[N];
for(ll i=1;i<=n;i++){
    dis[i]=INF;
}
ll s;
cin>>s;
dis[s]=0;
for(ll i=1;i<=n-1;i++){
    for(ll j=0;j<vec.size();j++){
        Edge ed=vec[j];
        ll u=ed.u;
        ll v=ed.v;
        ll w=ed.w;

        if(dis[u]+w<dis[v] && dis[u]!=INF){
            dis[v]=dis[u]+w;
        }
    }
}
bool cycle=false;
    for(int j=0;j<vec.size();j++){
         Edge ed=vec[j];
        ll u=ed.u;
        ll v=ed.v;
        ll w=ed.w;

          if(dis[u]+w<dis[v] && dis[u]!=INF){
            cycle=true;
            break;
            
        }

    }
ll q;
cin>>q;
while(q--){
  ll x;
  cin>>x;
  if(cycle){
    cout<<"Negative Cycle Detected"<<endl;
       return 0;
  }
  else{
    if(dis[x]==INF)
    cout<<"Not Possible"<<endl;
    else
      cout<<dis[x]<<endl;
  }
  
 
    
}

get_out;
}