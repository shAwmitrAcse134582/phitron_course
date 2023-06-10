#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n;
cin>>n;
char a[n][n];
int x=n/2;
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        if(i==j){
            if(i==x && j==x){
              a[i][j]='X';
          }
          else{
            a[i][j]='\\';
          }
        }
         else if(i+j==n-1){
        a[i][j]='/';
      }
      else{
        a[i][j]=' ';
      }
    }  
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<a[i][j];
    }
    cout<<endl;
}
get_out;
}