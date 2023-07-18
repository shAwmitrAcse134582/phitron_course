#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
//declaration
map<string,int>mp;
//inserting value
mp.insert({"shawmitra",33});
mp.insert({"ashik",32});
mp.insert({"soheb",19});
mp.insert({"nasim",17});
//another decclaration style
mp["sharif"]=42;
//iteration loop
for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
//check value is in map or not
if(mp.count("tonmoy")){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
//direct key access
cout<<mp["shawmitra"]<<endl;
get_out;
}