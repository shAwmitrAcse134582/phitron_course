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
string word;
stringstream ss(s);
map<string,int>mp;
while(ss>>word){
    // cout<<word<<endl;
    mp[word]++;
}
for(auto val:mp){
    cout<<val.first<<" "<<val.second<<endl;
}
get_out;
}