#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}

ll c=0,d=0;
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
             if(a[i]+1 == a[j]){
                    c++; 
                    break; 
                
             }
               
    }
}
    cout<<c<<endl;
get_out;
}