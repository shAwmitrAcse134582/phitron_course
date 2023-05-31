#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;

ll n,x;
cin>>n>>x;
ll sum=0;
for(int i=2;i<=x;i=i+2){
    cout<<n<<" "<<i<<endl;
    sum+=pow(n,i);
    cout<<sum<<endl;
   
}
 cout<<sum<<endl;
get_out;
}