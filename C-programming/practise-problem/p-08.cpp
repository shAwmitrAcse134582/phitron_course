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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll e=0,o=0;
    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
        for(ll i=0;i<n;i++){
            if(a[i]%2==0){
              e++;
            }else{
                o++;
            }
        }
        cout<<abs(e-o)/2<<endl;
    }
}
get_out;
}