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
while(getline(cin,s)) {
sort(s.begin(),s.end());
for(ll i=0;i<s.size();i++){
    if(s[i]!=' ')
cout<<s[i];
}
cout<<endl;
}



get_out;
}