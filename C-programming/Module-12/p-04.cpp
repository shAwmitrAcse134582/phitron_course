#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;

   string s;
   cin>>s;
   int sz=s.size();
   int sm=0,cp=0;
   for(int i=0;i<sz;i++){
    if(s[i]>='A' && s[i]<='Z'){
         cp++;
    }
    else{
          sm++;
    }
   }
   cout<<cp<<" "<<sm<<endl;
    

get_out;
}