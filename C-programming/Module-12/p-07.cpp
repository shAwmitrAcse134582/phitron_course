#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
string s;
cin>>s;

int cnt[26]={0};
int sz=s.size();
for(int i=0;i<sz;i++){
    s[i]=tolower(s[i]);
    int val=s[i]-'a';
    cnt[val]++;
}
// for(int i=0;i<26;i++){
//     char ch=i+'a';
//     cout<<ch<<" - "<<cnt[i]<<endl;
// }

// using map
map<char,int>mp;
for(int i=0;i<sz;i++){
    mp[s[i]]++;
}
for(auto val : mp){
    cout<<val.first<<" "<<val.second<<endl;
}
get_out;
}