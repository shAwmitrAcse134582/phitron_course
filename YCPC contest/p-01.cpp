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
    ll a,b;
    cin>>a>>b;
    ll x1=a%10;
    ll x2=a%100;
    // cout<<x1<<endl;
    // cout<<x2<<endl;
    // cout<<x1<<x2<<endl;

    //  ll x3=b%10;
    ll x4=b%100;
    // ll c=x1+x2*10;
    // cout<<c<<endl;
    // ll d=x3+x4*10;

    ll ans=x2*x4;
    cout<<ans%100<<endl;
  

}
get_out;
}