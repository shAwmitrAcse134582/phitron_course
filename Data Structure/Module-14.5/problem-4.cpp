#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
queue<int>q;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    q.push(x);
}
stack<int>st;
while(!q.empty()){
    st.push(q.front());
    q.pop();
}
queue<int>q2;
while(!st.empty()){
    q2.push(st.top());
    st.pop();
}
while(!q2.empty()){
    cout<<q2.front()<<" ";
    q2.pop();
}
get_out;
}