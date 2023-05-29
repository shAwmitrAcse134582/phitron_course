#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
string s;
getline(cin,s);
// stringstream ss(s);
// string word;
for(ll i=0;i<s.size();i++){
   string s2;
   while(s[i]!=' ' && i<s.size()){
    s2.pb(s[i]);
    i++;
   }
   reverse(s2.begin(),s2.end());
   if(i<s.size())
   cout<<s2<<" ";
   else{
      cout<<s2<<endl;
   }
   
}


get_out;
}