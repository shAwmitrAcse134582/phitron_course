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
  string s;
  cin>>s;
  ll x=s[0]+s[1]+s[2];
  ll y=s[3]+s[4]+s[5];
   if(x==y){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}
get_out;
}