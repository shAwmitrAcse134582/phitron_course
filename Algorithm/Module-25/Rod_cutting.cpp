#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int unbounded_knapsack(ll n,ll s,ll val[],ll w[]){
    
   if(n==0 || s==0) return 0;   

   if(w[n-1]<=s){
     int ch1=val[n-1] + unbounded_knapsack(n,s-w[n-1],val,w);
    int ch2=unbounded_knapsack(n-1,s,val,w);
    return max(ch1,ch2);
   }
   else{
    return unbounded_knapsack(n-1,s,val,w);
   }

}
int main()
{
fast;
ll n;
cin>>n;
ll val[n],w[n];
for(ll i=0;i<n;i++){
    cin>>val[i];
    w[i]=i+1;
}
cout<<unbounded_knapsack(n,n,val,w)<<endl;
get_out;
}