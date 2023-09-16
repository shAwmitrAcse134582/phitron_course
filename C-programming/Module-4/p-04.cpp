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
  for(int i=1;i<=n;i++){
    if(i%3==0 && i%7==0){
        cout<<i<<endl;
    }
  }
get_out;
}