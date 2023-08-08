#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
int adj[N][N];
vector<int>v[N];

int main()
{
fast;
int n;
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
    cin>>adj[i][j];
    if(adj[i][j]==1){
        v[i].push_back(j);
    }
}
}
for(int i=1;i<=n;i++){
    cout<<"List "<<i<<" : ";
    for(auto val:v[i]){
        cout<<val<<" ";
    }
    cout<<endl;
}

get_out;
}