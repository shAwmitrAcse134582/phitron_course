#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n,k;
cin>>n>>k;
ll a[n+1];
for(ll i=1;i<=n;i++){
    cin>>a[i];
}

ll i,j;
for( i=1;i+k-1<=n;i++){
    ll mn=INT_MAX;
  
    for( j=i;j<=i+k-1;j++){
     if(a[j]<mn)
     mn=a[j];
    }
    i=j-1;//3
   cout<<mn<<" ";
//    m++;

}
ll mn2= INT_MAX;
for(ll k = i;k < n+1;k++){
  mn2 = min(mn2,a[k]);

}
 if(mn2!=INT_MAX) cout << mn2 << endl;


get_out;
}