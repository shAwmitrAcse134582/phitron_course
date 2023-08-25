#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
bool vis[N][N];
 vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
 int n,m;
 char a[N][N];
 int cnt;
//  vector<pair<int,int>>cmp;
    bool isvalid(int ci, int cj)
    {
        return(ci >= 0 && ci < n && cj >= 0 && cj < m);
            
    }

 void dfs(int si,int sj){
   vis[si][sj]=true;
   cnt++;
//    cmp.push_back({si,sj});
   for(int i=0;i<4;i++){
    pair<int,int>p=dir[i];
    int ci=si+p.first;
    int cj=sj+p.second;
     if (isvalid(ci, cj) && !vis[ci][cj] && a[ci][cj]=='.')
            {
                dfs(ci,cj);
            }
   }
 }

  
int main()
{
fast;

 cin>>n>>m;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
 }
 int mn=INT_MAX;
int cmp=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!vis[i][j] && a[i][j]=='.'){
             cnt=0;
             cmp++;
             dfs(i,j);
             mn=min(mn,cnt);
        }
    }
 }
 if(cmp==0){
    cout<<-1<<endl;
 }
 else{
    cout<<mn<<endl;
 }


get_out;
}