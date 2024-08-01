#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int parent[N];
int parentSz[N];
class Edge{
    public:
    ll a,b,w;
    Edge(ll a,ll b,ll w){
       this->a=a;
       this->b=b;
       this->w=w;
    }
};
bool cmp(Edge a,Edge b){
    return a.w<b.w;
}
void dsu_set(int n){
    for(int i=1;i<=n;i++){
        parent[i]=-1;
        parentSz[i]=1;
    }
}
int dsu_find(int node){
    while(parent[node]!=-1){
        node=parent[node];
    }
    return node;
}
void dsu_union(int a,int b){
    int leaderA=dsu_find(a);
    int leaderB=dsu_find(b);
    if(leaderA!=leaderB){
        if(parentSz[leaderA]>parentSz[leaderB]){
            parent[leaderB]=leaderA;
            parentSz[leaderA]+=parentSz[leaderB];
        }
        else{
            parent[leaderA]=leaderB;
            parentSz[leaderB]+=parentSz[leaderA];
        }
    }
}
int main()
{
fast;
int n,e;
cin>>n>>e;
vector<Edge>v;
vector<Edge>ans;
dsu_set(n);
while(e--){
    ll a,b,w;
    cin>>a>>b>>w;
    v.push_back(Edge(a,b,w));

}
sort(v.begin(),v.end(),cmp);
for(Edge val : v){
    ll a=val.a;
    ll b=val.b;
    ll w=val.w;
    int leaderA=dsu_find(a);
    int leaderB=dsu_find(b);
    if(leaderA==leaderB){
        continue;
    }
    ans.push_back(val);
    dsu_union(a,b);
}
ll sum=0;
for(Edge val : ans){
    sum+=val.w;
}
cout<<sum<<endl;

get_out;
}