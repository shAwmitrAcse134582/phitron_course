#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int knapsack(int n,int s,int v[],int w[]){
    if(n==0 || s==0)return 0;
    if(w[n-1]<=s){
        int ch1=knapsack(n-1,s-w[n-1],v,w) + v[n-1];
        int ch2=knapsack(n-1,s,v,w);
        return max(ch1,ch2);

    }
    else{
        return knapsack(n-1,s,v,w);
    }
}
int main()
{
fast;
int n;
cin>>n;
int v[n],w[n];
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=0;i<n;i++){
    cin>>w[i];
}
int s;
cin>>s;
cout<<knapsack(n,s,v,w);
get_out;
}