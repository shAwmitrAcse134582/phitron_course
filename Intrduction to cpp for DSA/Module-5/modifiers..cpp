#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
string s1,s2;
cin>>s1>>s2;
s1+=s2;
cout<<s1<<endl;
s2.append(s1);
cout<<s2<<endl;
s2.pb('p');
cout<<s2<<endl;
s2.pop_back();
cout<<s2<<endl;
s2.assign("shawmitra");
cout<<s2<<endl;
s2.erase(5);
cout<<s2<<endl;
s1.erase(0,3);
cout<<s1<<endl;
s2.replace(5,2,"xxX");
cout<<s2<<endl;
s2.insert(5,"das");
cout<<s2<<endl;



get_out;
}