#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
ll a[21];
ll n,x;
bool solve(ll sum,ll i){
    if(i==n){
        return sum==x;
    }

    bool ch1=solve(sum+a[i],i+1);
    bool ch2=solve(sum-a[i],i+1);
    return ch1 || ch2;
}
int main()
{
fast;
cin>>n>>x;
for(ll i=0;i<n;i++){
    cin>>a[i];
}
   if(solve(a[0],1)){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
get_out;
}