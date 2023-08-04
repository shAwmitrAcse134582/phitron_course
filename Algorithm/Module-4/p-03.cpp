#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int k;
cin>>k;
int l=0,r=n-1;
int c=0;
while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]==k){
        if(a[mid+1]==k || a[mid-1]==k){
            c=1;
            
        }
        break;
    }
    else if(a[mid]<k){
        l=mid+1;
    }
    else{
        r=mid-1;
    }
}
if(c){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
get_out;
}