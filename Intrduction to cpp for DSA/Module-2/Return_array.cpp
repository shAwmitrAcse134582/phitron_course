#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int *fun(){
    int *a=new int[5];
    // int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    return a;
}
int main()
{
fast;
int *a=fun();
for(int i=0;i<5;i++){
 cout<<a[i]<<" ";
}
get_out;
}