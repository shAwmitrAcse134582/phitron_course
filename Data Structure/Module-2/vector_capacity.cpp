#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
vector<int>v;
cout<<v.max_size()<<endl;
v.pb(10);
v.resize(6,20);
cout<<v.capacity()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
get_out;
}