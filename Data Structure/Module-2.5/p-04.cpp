#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n;
cin>>n;
vector<ll>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.pb(x);
}
int cnt=0;
for(int i=0;i<v.size();i++){
    for(int j=0;j<v.size();j++){
        if(v[i]+1==v[j]){
            cnt++;
            break;
        }
    }
}
cout<<cnt<<endl;
get_out;
}