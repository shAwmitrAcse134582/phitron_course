#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=20+1;
vector<int>V[N];
int main()
{
fast;
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    V[u].push_back(v);
    // V[v].push_back(u);
}
int p;
cin>>p;
int ans=V[p].size();
cout<<ans<<endl;
get_out;
}