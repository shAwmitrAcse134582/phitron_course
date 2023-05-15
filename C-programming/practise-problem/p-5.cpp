#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll  n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    if(a[i]==0){
        int l=0;
        int r=i-1;
        while(l<r){
            int tmp=a[l];
            a[l]=a[r];
            a[r]=tmp;
             l++;
              r--;
        }
       
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
get_out;
}