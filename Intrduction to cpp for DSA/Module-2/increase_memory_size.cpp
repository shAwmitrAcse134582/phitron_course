#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
int *a=new int[5];
for(int i=0;i<5;i++){
    cin>>a[i];
}
int *b=new int[7];
for(int i=0;i<5;i++){
    b[i]=a[i];
}
b[5]=60;
b[6]=70;
for(int i=0;i<7;i++){
    cout<<b[i]<<" ";
}
cout<<endl;
delete[] a;
for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
}
get_out;
}