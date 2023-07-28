#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n;
cin>>n;
if(n<=2){
    cout<<n<<endl;
}
else{
    cout<<(1<<n-2)*2ll*(1<<n-2)<<endl;
}
get_out;
}