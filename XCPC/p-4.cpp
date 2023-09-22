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
ll k=1;
for(ll i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==n || j==n){
            cout<<n;

        }
      else  if(i==1){
           cout<<j;
        }
        else if(j==1){
            cout<<i;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;

}
get_out;
}