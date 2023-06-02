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
    string s,x;
    cin>>s>>x;
    ll sz=x.size();
    while(s.find(x)!=-1){
        s.replace(s.find(x),sz,"$");
    }
    cout<<s<<endl;
}
get_out;
}