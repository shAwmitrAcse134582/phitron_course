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
stack<int>st2;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
}
while(!st.empty()){
    st2.push(st.top());
    st.pop();
}
while(!st2.empty()){
    cout<<st2.top()<<" ";
    st2.pop();
}
get_out;
}