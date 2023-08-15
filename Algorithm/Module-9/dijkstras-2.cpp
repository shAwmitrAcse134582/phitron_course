#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+3;
const ll INF=1e18+5;
vector<pair<int, int>> adj[N];
long long int dist[N];
bool visited[N];
int parent[N];
int n,e;

void dijkstra(int src)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }

    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({dist[src], src});

    while (!pq.empty())
    {
        pair<int, int> f = pq.top();
        pq.pop();

        int selectedNode = f.second;

        if (visited[selectedNode])
            continue;
        visited[selectedNode] = true;

        for (auto child : adj[selectedNode])
        {
            int edgeCost = child.first;
            int v = child.second;

            if (dist[selectedNode] + edgeCost < dist[v])
            {
                dist[v] = dist[selectedNode] + edgeCost;
                pq.push({dist[v], v});
                parent[v] = selectedNode;
            }
        }
    }
}

int main()
{
fast;

cin>>n>>e;
for(int i=0;i<e;i++){
    int a,b,w;
    cin>>a>>b>>w;
    adj[a].push_back({w,b});
    adj[b].push_back({w,a});

}
dijkstra(1);
// for(int i=1;i<=e;i++){
//     cout<<dist[i]<<endl;
// }
 if(!visited[n]){
        cout<<-1<<endl;
        return 0;
    }
    // for(int i=1;i<=nodes;i++){
    //     cout<<d[i]<<" ";
    // }

    int current = n;
    vector<int> paths;

    while (true)
    {
        paths.push_back(current);
        if (current == 1)
        {
            break;
        }
        current = parent[current];
    }

    reverse(paths.begin(),paths.end());

    for(int val:paths){
        cout<<val<<" ";
    }
    cout<<endl;

get_out;
}