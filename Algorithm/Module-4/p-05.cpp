#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void marge(int a[],int b[],int c[],int n,int m){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]>b[j]){
              c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
}
int main()
{
fast;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
int c[n+m];
marge(a,b,c,n,m);
for(int i=0;i<n+m;i++){
    cout<<c[i]<<" ";
}

get_out;
}