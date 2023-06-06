#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
vector<int>v={1,2,3};
vector<int>x={10,20,30};
v=x;
v.pop_back();

v.insert(v.begin()+1,4);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.insert(v.begin()+2,x.begin(),x.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
get_out;
}