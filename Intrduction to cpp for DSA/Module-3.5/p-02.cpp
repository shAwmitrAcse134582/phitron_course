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
char d,e;
cin>>a>>d>>b>>e>>c;
if((a+b==c) || (a-b==c)|| (a*b==c)){
    cout<<"Yes"<<endl;
}
else {
   if(d=='+'){
    cout<<a+b<<endl;
   }
   else if(d=='-'){
    cout<<a-b<<endl;
   }
   else{
    cout<<a*b<<endl;
   }
}
get_out;
}