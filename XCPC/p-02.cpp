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
string s1,s2;
  while(cin>>s1>>s2){
    // cout << s1 << endl << s2 << endl;
    ll j=0;
    ll i=0;
    bool paici=false;
    for( i=0;i<s2.size();i++){
        while(j<s1.size() && s2[i]!=s1[j])j++;
        if(s2[i]!=s1[j]){
          paici = true;
          // cout << i << endl;
          break;
        }
        else if(j>=s1.size() ){
          paici=true;
          // cout << i << endl;
          break;
        }
        j++;
    }   
    if(paici)cout << "Impossible" << endl;
    else cout << "Possible" << endl;


  }

get_out;
}