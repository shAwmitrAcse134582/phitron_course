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
ll cnt=0;
bool ok=false;
for(char c:s)
{
    if(isalpha(c))
    {
         if(ok==false){
            cnt++;
         }
         ok=true;
    }
    else{
        ok=false;
    }
}

cout<<cnt<<endl;
get_out;
}