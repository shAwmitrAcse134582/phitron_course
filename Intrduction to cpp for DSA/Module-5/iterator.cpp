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
// string:: iterator it;
cin>>s;
// for(int i=0;i<s.size();i++){
//     cout<<s[i]<<endl;
// }
cout<<*s.begin()<<endl;
cout<<*(s.end()-1)<<endl;
for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<endl;
}


get_out;
}