#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
ll save[N];
ll fibo(ll n){
    if(n==0 || n==1)return 1;
    if(save[n]!=-1){
        return save[n];
    }
    ll ans1=fibo(n-1);
    ll ans2=fibo(n-2);
    save[n]=ans1+ans2;
    return save[n];
}
int main()
{
fast;
ll n;
cin>>n;
for(ll i=0;i<=n;i++){

    save[i]=-1;
}
cout<<fibo(n)<<endl;
get_out;
}