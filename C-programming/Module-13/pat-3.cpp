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
int k=2*n-1;
int s=0;
for(int i=0;i<n;i++){
    for(int j=0;j<=s;j++){
        cout<<" ";
    }
    for(int p=k;p>0;p--){
        cout<<"*";
    }
    cout<<endl;
    k-=2;
    s++;
}
get_out;
}