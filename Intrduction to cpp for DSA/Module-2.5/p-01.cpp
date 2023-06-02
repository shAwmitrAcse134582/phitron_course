#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
char ch;
cin>>ch;
if(ch>='0' && ch<='9'){
    cout<<"IS DIGIT"<<endl;
}
else if(ch>='a' && ch<='z'){
    cout<<"ALPHA"<<endl<<"IS SMALL";
}
else{
    cout<<"ALPHA"<<endl<<"IS CAPITAL";
}
get_out;
}