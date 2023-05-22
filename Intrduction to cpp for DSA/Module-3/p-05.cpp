#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll a,b,c;
cin>>a>>b>>c;
ll mn=min(a,min(b,c));
ll mx=max(a,max(b,c));
cout<<mn<<" "<<mx<<endl;
get_out;
}