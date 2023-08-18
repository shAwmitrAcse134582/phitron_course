#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+3;
int adj[N][N];
int main()
{
fast;
int v,e;
cin>>v>>e;
for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
   adj[u][v]=1;
//    adj[v][u]=1;

}
for(int i=1;i<=v;i++){
    for(int j=1;j<=v;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}
get_out;
}