#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
// vector<int>v; type-1
//  vector<int>v(5); type-2
// vector<int>v(5,10); type-3
// vector<int>v2(5,100); type-4
// vector<int>v(v2);
int a[6]={1,2,3,4,5,6};
vector<int>v(a,a+6);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
cout<<v.size()<<endl;
get_out;
}