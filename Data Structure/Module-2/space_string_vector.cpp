#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
int n;
cin>>n;
cin.ignore();
vector<string>v;
for(int i=0;i<n;i++){
    string s;
   getline(cin,s);
    v.push_back(s);
}
for(auto name:v){
    cout<<name<<endl;
}

get_out;
}