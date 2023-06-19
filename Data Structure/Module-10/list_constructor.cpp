#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
//list<int>l;
// list<int>l(10,5);
// list<int>l2={1,2,3,4,5};
// int a[7]={1,2,3,4,5,6,7};

// list<int>l(l2);

// list<int>l(a,a+7);
vector<int>v={1,2,3,4,5};
list<int>l(v.begin(),v.end());

// for(auto it=l.begin();it!=l.end();it++){
//     cout<<*it<<" ";
// }
for(int val:l){
    cout<<val<<" ";
}

// cout<<l.size();
get_out;
}