#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<string>g;
int visited[N][N];
vector<pair<int,int>>dist={{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool isvalid(int si, int sj)
{
    return (si >= 0 && si < g.size() && sj >= 0 && sj < g[si].size());
}
void bfs(int si,int sj){
   queue<pair<int,int>>q;
   q.push({si,sj});
   visited[si][sj]=1;
     while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(auto val: dist){
           int n=x+val.first;
           int m=y+val.second;
           if(isvalid(n, m) && g[n][m] != 'x' && visited[n][m] != 1)
            {
                q.push({n, m});
                visited[n][m] = 1;
            }
        }
     }

}
void dfs(int i, int j)
{
    visited[i][j] = 1;

    for(auto d : dist)
    {
        int x = i + d.first;
        int y = j + d.second;
        
        if(isvalid(x, y) && g[x][y] != 'x' && visited[x][y] != 1)
        {
            dfs(x, y);
        }
    }
}
int main()
{
fast;
int n,e;
cin>>n>>e;
int si,sj,di,dj;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    for(int j=0;j<s.size();j++){
        if(s[j]=='s'){
            si=i;
            sj=j;
        }
        if(s[j]=='e'){
            di=i;
            dj=j;
        }
    }
    g.push_back(s);
}
// bfs(si,sj);
dfs(si,sj);
if(visited[di][dj]==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
get_out;
}