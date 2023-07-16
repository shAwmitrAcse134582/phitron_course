#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
vector<int>v={50,40,45,30,35,42,32,25,20,10};
int x;
cin>>x;
v.push_back(x);
int cur_idx=v.size()-1;
// cout<<cur_idx<<endl;

// cout<<parent<<endl;
while(cur_idx!=0){
    int parent=(cur_idx-1)/2;
    if(v[parent]<v[cur_idx]){
        swap(v[parent],v[cur_idx]);
    }
    else{
        break;
    }
    cur_idx=parent;
}
for(auto val:v){
    cout<<val<<" ";
}

get_out;
}