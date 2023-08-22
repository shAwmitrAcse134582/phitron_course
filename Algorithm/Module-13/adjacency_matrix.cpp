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
int adj[n+1][n+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        adj[i][j]=0;
    }
}
while(e--){
    int u,v;
    cin>>u>>v;
    adj[u][v]=1;
    adj[v][u]=1;
}

for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
       cout<<adj[i][j]<<" ";

    }
    cout<<endl;
}

get_out;
}