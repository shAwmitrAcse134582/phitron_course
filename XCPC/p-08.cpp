#include<bits/stdc++.h>
using namespace std;
#define  ll long long int 
#define  all(x)  x.begin(),x.end()
#define  ifor(n) for(int i = 0; i<n;i++)
#define  jfor(n) for (int j =0;j <n;j++ )
#define  ll long long int 
#define  F first 
#define  S second  
#define  pb push_back 
#define  pii pair<ll,ll> 
#define  vec vector<ll> 
#define  endl "\n"
#define  yes cout <<"YES\n"
#define  no cout <<"NO\n"
int const mod = 1e9+7; 
const ll inf = 5*1e18;
ll n,m,k,ans,sum,temp,x,y; 

 
void solve()
{    
  
      cin >> n; 
      
      vector<ll>a(n);  ll sum = 0; 
      for(int i = 0;i<n;i++)cin >> a[ i ],sum += a[ i ];  
      
      sort(all(a)); 
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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	
    int t = 1; cin >> t;
    while(t--) 
    solve(); 
	   
 return 0; 
}