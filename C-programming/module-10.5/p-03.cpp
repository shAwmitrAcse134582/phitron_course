#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
string s;
cin>>s;
ll x=s.size();
for(ll i=0;i<x;i++){
    if(s[i]==','){
        s[i] =' ';
    }
    else if(s[i]>='a' && s[i]<='z'){
        s[i]=s[i]-32;
    }
    else{
        s[i]=s[i]+32;
    }
}
cout<<s<<endl;
get_out;
}