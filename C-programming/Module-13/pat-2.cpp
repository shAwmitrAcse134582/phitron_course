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

  ll n;
  cin>>n;
  ll k=1,s=n-1;
  for(int i=0;i<n;i++){
    for(int j=s;j>=0;j--){
        cout<<" ";
    }
    for(int p=1;p<=k;p++){
        cout<<"*";
    }
    s--;
    k+=2;
    cout<<endl;
  }



get_out;
}