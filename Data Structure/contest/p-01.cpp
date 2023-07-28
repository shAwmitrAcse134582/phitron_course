#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll a,b,c;
cin>>a>>b>>c;
if(a==0 &&b==0 && c==0){
    cout<<"No"<<endl;
}

else if(a==b && b==c){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

get_out;
}