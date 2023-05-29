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
 
   while(s.find("EGYPT")!=-1){
       s.replace(s.find("EGYPT"),5," ");
   }
   cout<<s<<endl;
  


get_out;
}