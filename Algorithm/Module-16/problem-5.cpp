#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define pii pair<int,int>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int n,m;
const int N=101;
bool vis[N][N];
int dis[N][N];
int di,dj;
int cnt;
vector<pair<int, int>> dir = {{2, 1}, {2, -1}, {-2, -1}, {-2, 1},
 {1, 2}, {-1, 2}, {-1, -2}, {1, -2}};
  
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

        for(int i=0;i<8;i++){
            pii p=dir[i];
            int ci=pi + p.first;
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
int t;
cin>>t;
while(t--){
 cin>>n>>m;
 int si,sj;
 cin>>si>>sj;
 cin>>di>>dj;  
  if(si==di && sj==dj){
    cout<<0<<endl;
  }
  else{
    bfs(si,sj);
    if(vis[di][dj]==false){
           cout<<-1<<endl;      
    }
    else{
     cout<<dis[di][dj]<<endl;
    }
    for(int i=0;i<101;i++){
      for(int j=0;j<101;j++){
        vis[i][j]=false;
      }
    }
  
  }
}
get_out;
}
