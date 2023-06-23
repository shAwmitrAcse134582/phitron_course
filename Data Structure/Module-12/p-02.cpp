#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
list<int>l;
int x;
while(true){
    cin>>x;
    if(x==-1){
        break;
    }
    else{
         l.push_back(x);
    }
}
l.sort();
l.unique();
for(auto val:l){
    cout<<val<<" ";
}
cout<<endl;

get_out;
}