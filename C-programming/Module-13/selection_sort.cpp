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
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
for(ll i=0;i<n-1;i++){
    for(ll j=i+1;j<n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
        
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
get_out;
}