#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
list<int>l={1,2,3,4,5};
vector<int>v={10,20,30};
list<int>l2;
// l2=l;
l2.assign(l.begin(),l.end());
// l2.push_front(10);
// l2.push_back(20);
// l2.pop_back();
// l2.pop_front();
l2.insert(next(l2.begin(),3),v.begin(),v.end());

replace(l2.begin(),l2.end(),5,50);
// l2.erase(next(l2.begin(),3));
for(auto val:l2){
    cout<<val<<" ";
}
get_out;
}