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
ll t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int x=s.size();
    if(x>10)
    cout<<s[0]<<x-2<<s[x-1]<<endl;
    else
      cout<<s<<endl;
}
get_out;
}