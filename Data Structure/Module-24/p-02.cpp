#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll t;
cin>>t;
cin.ignore();
while(t--)
{
   string s;
getline(cin,s);
string word;
stringstream ss(s);
map<string,int>mp,mp2;
while(ss>>word){
    // cout<<word<<endl;
    mp[word]++;
}
ll mx=INT_MIN;
// string st;

for(auto val:mp){
   
    if(val.second>mx){
        mx=val.second;
        // st=val.first;
    }
}
stringstream ss2(s);

  while(ss2>>word){
    // cout<<word<<endl;
    mp2[word]++;

    if(mp2[word]==mx){
         cout<<word<<" "<< mx <<endl;
         break;
    }
    
  }

}

get_out;
}