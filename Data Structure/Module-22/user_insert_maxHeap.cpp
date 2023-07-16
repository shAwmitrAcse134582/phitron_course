#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
vector<int>v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
    int cur_idx=v.size()-1;
    while(cur_idx!=0){
        int prnt_idx=(cur_idx-1)/2;
        if(v[prnt_idx]<v[cur_idx]){
            swap(v[prnt_idx],v[cur_idx]);
        }
        else{
            break;
        }
        cur_idx=prnt_idx;
    }
}
for(auto val:v){
    cout<<val<<" ";
}
get_out;
}