#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
vector<int>adj[N];

int main()
{
fast;
int v,e;
cin>>v>>e;
for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
     adj[u].push_back(v);
    //  adj[v].push_back(u);
}
for(int i=1;i<=v;i++){
    cout<<"List "<<i<<" : ";
    for(auto j : adj[i]){
        cout<<j<<" ";
    }
    cout<<endl;
}
get_out;
}