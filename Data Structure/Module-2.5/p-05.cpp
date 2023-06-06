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
cin>>s;
vector<ll>v(26,0);
for(int i=0;i<s.size();i++){
  int x=s[i]-'a';
  v[x]++;
}
for(int i=0;i<26;i++){
   if(v[i]!=0)
   {
    cout<<char(i+'a')<<" "<<":"<<" "<<v[i]<<endl;
   }
}
get_out;
}