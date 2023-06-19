#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
list<int>l={10,20,30,25,15,5,10,20,20};
l.remove(10);
l.sort();
l.unique();
for(auto val:l){
    cout<<val<<" ";
}
cout<<endl;
l.sort(greater<int>());
for(auto v:l){
    cout<<v<<" ";
}
get_out;
}