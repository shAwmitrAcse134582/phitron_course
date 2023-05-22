#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll a,b;
cin>>a>>b;
ll x=a+b;
ll y=a*b;
ll z=a-b;
cout<<a<<" + "<<b<<" = "<<x<<endl;
cout<<a<<" * "<<b<<" = "<<y<<endl;
cout<<a<<" - "<<b<<" = "<<z<<endl;
get_out;
}