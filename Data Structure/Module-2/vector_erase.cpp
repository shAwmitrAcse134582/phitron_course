#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
vector<int>v={1,2,3,4,5};
// v.erase(v.begin()+2);single value erasing
v.erase(v.begin()+2,v.end()-1);
for(auto x:v){
    cout<<x<<" ";
}
get_out;
}