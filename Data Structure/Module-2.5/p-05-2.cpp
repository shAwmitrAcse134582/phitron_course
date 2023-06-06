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
map<char,ll>mp;
for(ll i=0;i<s.size();i++){
    int x=s[i]-'a';
    mp[x]++;
}
for(auto val:mp){
    cout<<char((val.first)+'a')<<" "<<":"<<" "<<val.second<<endl;
}
get_out;
}