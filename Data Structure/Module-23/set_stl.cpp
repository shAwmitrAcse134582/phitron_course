#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
set<int>st;
int n;
cin>>n;
vector<int>v;
while(n--){
    int x;
    cin>>x;
    st.insert(x);
}
for(auto it=st.begin();it!=st.end();it++){
    cout<<*it<<endl;
    v.push_back(*it);
}
sort(v.rbegin(),v.rend());
for(auto i=v.begin();i<v.end();i++){
   cout<<*i<<endl;
}
get_out;
}