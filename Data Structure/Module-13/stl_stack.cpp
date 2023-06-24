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
// st.push(10);
// st.push(20);
// st.push(30);
// st.push(40);
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
}
while(!st.empty()){
   cout<<st.top()<<endl;
   st.pop();
}


get_out;
}