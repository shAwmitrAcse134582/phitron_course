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
ll x=s.size();
for(ll i=0;i<x;i++){
    
    if(s[i]>'0' && s[i]<='9'){
        string s2="";
        int nm=s[i]-'0';
        i++;
        
        while(i<x && s[i]>='a' && s[i]<='z'){
          s2+=s[i];
          i++;
          
        }
        for(ll j=0;j<nm;j++){
          cout<<s2;
        }
        if(i<x){
            cout<<s[i];
        }
        
        
    }
}
get_out;
}