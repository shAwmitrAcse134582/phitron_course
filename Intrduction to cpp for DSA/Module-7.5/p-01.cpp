#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  int a[n];
  int even=0,odd=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]%2==0){
        even++;
    }
    else{
        odd++;
    }

  }
  if(n%2!=0){
    cout<<-1<<endl;
  }
  else{
    cout<<abs(n/2-max(even,odd))<<endl;
  }

}
get_out;
}