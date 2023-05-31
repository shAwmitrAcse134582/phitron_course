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
string line;
int cnt=0;
string name="john";
while(ss>>line){
   stringstream linestream(line);
   string word;
   while(linestream>> word){
   if(word==name){
    cnt++;
   }
   }
}
cout<<cnt<<endl;
get_out;
}