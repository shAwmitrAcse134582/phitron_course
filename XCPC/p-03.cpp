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
  vector<ll>v;
   for(ll i=0;i<s.size();i++){
    ll c=0;
    if(s[i]=='1'){
        while(i<s.size() && s[i]=='1'){
          c++;
          i++;
        }
        v.pb(c);
        i--;

    }
   }
   sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
   ll sum=0;
   for(ll i=0;i<v.size();i+=2){
  sum+=v[i];

   }
   cout<<sum<<endl;

}
get_out;
}