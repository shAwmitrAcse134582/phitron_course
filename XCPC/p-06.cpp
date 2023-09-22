#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=101;
vector<ll> g[N];
ll vis[N], dis[N], lev[N];

void bfs(ll s, ll ck){
	queue<ll> q;
	q.push(s);
	vis[s] = 1;
	
	if(ck) dis[s] = 0;
	else lev[s] = 0;
	
	while(!q.empty()){
		ll p = q.front();
		q.pop();
		for(ll i = 0; i < g[p].size(); i++){
			ll x = g[p][i];
			if(vis[x] == -1){
				q.push(x);
				
				if(ck) dis[x] = dis[p] + 1;
				else lev[x] = lev[p] + 1;
				vis[x] = 1;
			}
		}
	}	
	
}


int main(){

fast;

    ll n, e;
    cin >> n >> e;
    
    for(ll i = 0; i < e; i++){
    	ll u, v;
    	cin >> u >> v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }
    
    ll u, v, k;
    cin >> u >> v >> k;
    memset(lev, -1, sizeof vis);
    memset(dis, -1, sizeof vis);
    memset(vis, -1, sizeof vis);
    bfs(u, 0);
    memset(vis, -1, sizeof vis);
    bfs(v, 1);
    
    
    ll ok = 0;
    for(ll i = 0; i < n; i++){
    	if(max(lev[i], dis[i]) <= k) ok = 1;
    }
    
    if(lev[u] == -1 || dis[u] == -1 || lev[v] == -1 || dis[v] == -1) ok = 0;
    
    if(ok){
        yes;
    }
    else{
        no;
    }
    
    
    return 0;
}