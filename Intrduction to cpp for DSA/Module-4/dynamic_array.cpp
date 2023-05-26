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
int *ar=new int[n];
for(int i=0;i<n;i++){
    cin>>ar[i];
}

for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}
cout<<endl;

delete[] ar;

for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}


get_out;
}