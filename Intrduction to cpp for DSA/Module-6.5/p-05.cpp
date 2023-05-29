#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   ll x=unique(s.begin(),s.end())-s.begin();
   ll y=s.size()-x;
   cout<<x*2+y<<endl;
     
}
get_out;
}