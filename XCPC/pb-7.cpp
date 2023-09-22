#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int mod=1e9+7;
const int N=1e5+7;
int main() {
  ll t;
  cin >> t;
  while(t--){
    ll n,d;
    cin >> n >> d;
    ll arr[n];

    ll sum = 0;
    for(ll i=0;i<n;i++){
      cin >> arr[i];
      sum=sum+ (arr[i]%mod) ;

    }
    sort(arr,arr+n);
    // if(sum==n && d==1){
    //   cout << 1 << endl;
    //   continue;
    // }


       // if(n==2 && abs(arr[0]-arr[1])==d  ){
       //  cout << 1 << endl;
       //  continue;
       // }
       // else

    if((sum+d)%2==1 || arr[n-1]>=sum  ){

       cout << 0 << endl;
      continue;
    }


    int mini,maxi;

    
    if(sum%2==1){
      mini = sum/2;
      maxi = (sum/2)+1;

    }
    else {
      mini=sum/2;
      maxi = sum/2;
    }
    ll times=105;
    while(times>=0 && (abs(maxi)-abs(mini) )!=d){
      maxi++;
      mini--;
      times--;
      // cout << maxi << ' ' << mini << ' ' << times <<  endl;
    }
    // cout << times << endl;
    if(times<=0 || maxi<=0 || mini <=0){
      cout << 0 << endl;
      continue;
    }


    // cout << maxi << ' ' << mini << endl;
    d = mini;

      ll m[n + 1][d + 1];
 
    m[0][0] = 1;
    for (int i = 1; i <= d; i++)
        m[0][i] = 0;
     
   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= d; j++)
        {
         
            if (arr[i - 1] > j)
                m[i][j] = m[i - 1][j]%mod;
            else
            {
                m[i][j] = m[i - 1][j]%mod + m[i - 1][j - arr[i - 1]]%mod;
            }
        }
    }
 
 
    cout <<  m[n][d]%mod << endl;

  }
  
}