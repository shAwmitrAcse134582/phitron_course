#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
int n;
cin>>n;
int s=n-1,k=1;
for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=s;j++){
        cout<<" ";
    }
    for(int j=1;j<=k;j++){
        cout<<"*";
    }
    if(i<n){
        s--;
        k+=2;
    }
    else{
        s++;
        k-=2;
    }
    cout<<endl;
}
get_out;
}