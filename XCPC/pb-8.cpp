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
ll t;
cin>>t;
while(t--){
    ll n;
    cin >> n; 
      
      vector<ll>a(n); 
       ll sum = 0; 
      for(int i = 0;i<n;i++){
           cin >> a[ i ];
             sum += a[ i ];  
      }
     
      
      sort(a.begin(),a.end()); 
      ll sum1 = 0; 
      
      bool ck = 1; 
      
      for(int i = n-1; i>0; i -=2){
      	ll mx = max(a[i], a[ i - 1 ]); 
      	ll mn = min(a[i],a[i-1]); 
      	if(ck)sum1 += mx;
      	else  sum1 += mn; 
      	ck=!ck; 
      }

      
      ll sum2 = sum - sum1; 
       
      cout <<abs(sum1-sum2)<<endl; 
    
}
get_out;
}