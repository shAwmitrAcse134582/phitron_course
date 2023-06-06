#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
 vector<int>v={1,2,3,4,5,6,7,8};
  vector<int>:: iterator it;
  it=find(v.begin(),v.end(),1);
//  auto it=find(v.begin(),v.end(),10);//auto use as iterator
 if(it==v.end()){
    cout<<"Not found"<<endl;
 }
 else{
    cout<<"Found"<<endl;
 }

get_out;
}