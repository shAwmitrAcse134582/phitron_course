#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int fibo(int n){
    if(n==0 || n==1)return 1;
    int ans1=fibo(n-1);
    int ans2=fibo(n-2);
    return ans1+ans2;
}
int main()
{
fast;
ll n;
cin>>n;
cout<<fibo(n)<<endl;
get_out;
}