#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int parent[8]={-1,-1,1,1,6,4,-1,-1};
int find(int n){
    while(parent[n]!=-1){
        n=parent[n];
    }
    return n;
}
int main()
{
fast;
cout<<find(7);
get_out;
}