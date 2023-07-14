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
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
}
for(int j=0;j<m;j++){
    int y;
    cin>>y;
    q.push(y);
}
if(st.size()!=q.size()){
    cout<<"NO"<<endl;
}
else{
    bool ok=false;
    while(!st.empty()){
         if(st.top()!=q.front()){
            ok=true;
            break;

         }
         st.pop();
         q.pop();
    }
    if(ok){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
get_out;
}