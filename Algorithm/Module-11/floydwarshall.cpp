#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
const int inf=1e9+7;
int d[N][N];
int n,m;
void print_matrix(){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(d[i][j]==inf){
                cout<<"x"<<" ";
                
            }
            else{
                   cout<<d[i][j]<<" ";
            }
        
           
        }
        cout<<endl;
    }
}
void dist_initialize(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j){
               d[i][j]=inf;
            }
           
        }
    }
}
int main()
{
fast;

cin>>n>>m;
dist_initialize();
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    d[u][v]=w;
    // d[v][u]=w;


}
print_matrix();
for(int k=1;k<=n;k++){
   for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
     }
   } 
}
cout<<"after floydwarshall"<<endl;
print_matrix();

get_out;
}