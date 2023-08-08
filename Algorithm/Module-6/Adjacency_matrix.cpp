#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
int adj[N][N];
int main()
{
fast;
int n,m;
cin>>n>>m;
 
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u][v]=w;
    adj[v][u]=w;

}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}
get_out;
}