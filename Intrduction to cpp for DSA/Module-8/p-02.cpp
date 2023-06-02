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
getline(cin,s);
stringstream ss(s);
string word;
int ok=0;
while(ss>>word)
{
    if(word=="Ratul"){
        ok=1;
        break;
    }
}
if(ok==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
get_out;
}