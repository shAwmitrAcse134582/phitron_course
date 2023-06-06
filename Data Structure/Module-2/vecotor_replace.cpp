#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
vector<int>v={1,2,3,4,5,1,3,4,2};
replace(v.begin(),v.end(),2,20);
for(auto x:v)
{
    cout<<x<<" ";
}
cout<<endl;
replace(v.begin(),v.end()-1,20,100);
for(auto x:v)
{
    cout<<x<<" ";
}
get_out;
}