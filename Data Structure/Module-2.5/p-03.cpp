#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
   cin>>v[i];
   if(v[i]>0){
    v[i]=1;
   }
   else if(v[i]<0){
    v[i]=2;
   }
}
for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
v.pop_back();
get_out;
}