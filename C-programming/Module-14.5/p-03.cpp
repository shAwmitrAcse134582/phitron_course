#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll n;
cin>>n;
ll m=n;
ll s=n-1;
ll k=1;
while(n--){
    for(ll j=0;j<s;j++){
        cout<<" ";
    }
    for(ll j=0;j<k;j++){
        cout<<"*";
    }
    s--;
    k+=2;
    cout<<endl;
}
ll ss=0;
ll kk=m;
while(m--){
    for(ll i=0;i<ss;i++){
        cout<<" ";
    }
    for(ll j=0;j<2*kk-1;j++){
        cout<<"*";
    }
    ss++;
    kk--;
    cout<<endl;
}
get_out;
}