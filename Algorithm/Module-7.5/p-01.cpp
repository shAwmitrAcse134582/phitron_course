#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];

void bfs(int u){
    queue<int>q;
    stack<int>st;
    q.push(u);
    visited[u]=true;
   
    while(!q.empty()){
        //pop a node  from the queue ans insert unvisited neighbour of that Node
        int t=q.front();
        q.pop();
        // cout<<"visiting Node: "<<t<<endl;
        st.push(t);
        for(auto v:adj[t]){
            if(visited[v]==true)
                continue;
               q.push(v);
                visited[v]=true;
               
            
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


}
int main()
{
fast;
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bfs(1);

get_out;
}