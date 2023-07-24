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
    int n;
    cin>>n;
    vector<ll>v;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll mx1=INT_MIN;
    ll mx2=INT_MIN;
    for(auto val:mp){
        if(val.second>=mx2)
        {
             mx2=val.second;
             if(val.first>mx1)
        {
                mx1=val.first;
        }
        }
        
       
    }
    cout<<mx1<<" "<<mx2<<endl;

}
get_out;
}