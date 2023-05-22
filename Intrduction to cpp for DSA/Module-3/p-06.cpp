#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int  *get_array(int n){
 int *a = new int[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 return a;
}
int main()
{
fast;
ll t;
cin>>t;
int *ans= get_array(t);
for(int i=0;i<t;i++){
    cout<<ans[i]<<" ";
}
get_out;
}