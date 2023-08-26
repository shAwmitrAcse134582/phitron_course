#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Edge{
 public:
 int u;
 int v;
 int w;
 Edge(int u,int v,int w){
    this->u=u;
    this->v=v;
    this->w=w;
 }
};
int main()
{
fast;
int n,e;
cin>>n>>e;
vector<Edge>vec;
while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    Edge ed(u,v,w);
    vec.push_back(ed);
    
}
int dis[n+1];
for(int i=1;i<=n;i++){
    dis[i]=INT_MAX;
}
dis[1]=0;
for(int i=1;i<n;i++){
    for(int j=0;j<vec.size();j++){
        Edge ed=vec[j];
        int u=ed.u;
        int v=ed.v;
        int w=ed.w;

        if(dis[u]+w<dis[v]){
            dis[v]=dis[u]+w;
        }
    }
}
    bool cycle=false;
    for(int j=0;j<vec.size();j++){
         Edge ed=vec[j];
        int u=ed.u;
        int v=ed.v;
        int w=ed.w;

          if(dis[u]+w<dis[v]){
            cycle=true;
            break;
            // dis[v]=dis[u]+w;
        }

    }
    if(cycle)
    cout<<"Cycle exist"<<endl;
    else
    cout<<"there is no Cycle"<<endl;

get_out;
}