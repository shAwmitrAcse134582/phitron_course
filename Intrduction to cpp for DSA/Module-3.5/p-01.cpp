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
char c;
cin>>a>>c>>b;
if((a>b && c=='>')|| (a<b && c=='<') || (a==b && c=='='))
cout<<"Right"<<endl;
else
cout<<"Wrong"<<endl;

get_out;
}