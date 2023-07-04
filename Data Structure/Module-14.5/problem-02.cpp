#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
stack<int>st;
queue<int>q;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
}
int m;
cin>>m;
for(int i=0;i<m;i++){
    int y;
    cin>>y;
    q.push(y);
}
bool ok=true;
while(!st.empty()){
    if(st.top()!=q.front()){
        ok=false;
        break;
    }
    st.pop();
    q.pop();
}
if(ok && st.size()==q.size())
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
get_out;
}