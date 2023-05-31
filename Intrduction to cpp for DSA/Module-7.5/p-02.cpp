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
   string s;
   char c;
   cin>>n>>c;
   s.resize(n,c);
   for(int i=0;i<n;i++)
   {
    cout<<s[i]<<' ';
   }
   cout<<endl;
   
  
}
get_out;
}