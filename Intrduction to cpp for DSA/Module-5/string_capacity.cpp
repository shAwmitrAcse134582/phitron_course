#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
string s;
cin>>s;
cout<<s.size()<<endl;
cout<<s.max_size()<<endl;
cout<<s.capacity()<<endl;
s.clear();
cout<<s<<endl;
if(s.empty()==true){
    cout<<"string is empty"<<endl;;
}
else{
    cout<<"string have characters"<<endl;
}
s="bangladesh";
s.resize(5);
cout<<s<<endl;
s.resize(10,'a');
cout<<s<<endl;
get_out;
}