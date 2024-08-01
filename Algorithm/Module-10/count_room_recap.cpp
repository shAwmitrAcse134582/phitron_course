#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<string>g;
bool vis[N][N];
int n,m;
bool isvalid(int i,int j){
    return(i>=0 && i<n && j>=0 && j<m);
}
void dfs(int i,int j){
    if(!isvalid(i,j))return;
    if(g[i][j]=='#')return;
    if(vis[i][j])return;

    vis[i][j]=true;
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i-1,j);
    dfs(i+1,j);

}
int main()
{
fast;

cin>>n>>m;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    g.push_back(s);
}
int  cnt=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(g[i][j]=='#')continue;
        if(vis[i][j]==true)continue;
        dfs(i,j);
        cnt++;
    }
}
cout<<cnt<<endl;
get_out;
}