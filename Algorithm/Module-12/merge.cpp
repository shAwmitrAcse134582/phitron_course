#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void merge(int a[],int l,int x,int r){
    int ls=x-l+1;
    int rs=r-x;
    int L[ls];
    int R[rs];
     
     int k=0;
     
     for(int i=l;i<=x;i++){
        L[k]=a[i];
        k++;
     }
     int j=0;
     for(int i=x+1;i<=r;i++){
        R[j]=a[i];
        j++;
     }
     int m=0,n=0;
     int tmp=l;
     while(m<ls && n<rs)
     {
        if(L[m]<=R[n]){
           a[tmp]=L[m];
           m++;
        }
        else{
            a[tmp]=R[n];
            n++;

        }
        tmp++;
     }
     while(m<ls){
        a[tmp]=L[m];
        m++;
        tmp++;
     }
      while(n<rs){
        a[tmp]=R[n];
        n++;
        tmp++;
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

merge(a,0,3,n-1);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
get_out;
}