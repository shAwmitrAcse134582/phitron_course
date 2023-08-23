#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define pii pair<int,int>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int n,m;
const int N=1e3+5;
bool vis[N][N];
int dis[N][N];
vector<pii>dir= {{1,0},{-1,0},{0,1},{0,-1}};
  
  bool isvalid(int ci,int cj){
    if(ci>=0 && ci<n && cj>=0 && cj<m)
    return true;
    else 
    return  false;
  }
 
 void bfs(int si,int sj){
    queue<pii>q;
    q.push({si,sj});
    dis[si][sj]=0;
    vis[si][sj]=true;

    while(!q.empty()){
        pii parent=q.front();
        int pi=parent.first;
        int pj=parent.second;
        q.pop();

        for(int i=0;i<4;i++){
            pii p=dir[i];

            int ci=pi +p.first;
            int cj=pj + p.second;
            if(isvalid(ci,cj) && ! vis[ci][cj]){
                vis[ci][cj]=true;
                q.push({ci,cj});
                dis[ci][cj]=dis[pi][pj] +1;
            }
        }
    }

 }
int main()
{
fast;
cin>>n>>m;
char a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
         cin>>a[i][j];
    }
}
int si,sj;
cin>>si>>sj;
bfs(si,sj);

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<dis[i][j]<<" ";
    }
    cout<<endl;
}
get_out;
}