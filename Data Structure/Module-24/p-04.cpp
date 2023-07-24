#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n;
cin>>n;
set<ll>s;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    s.insert(x);
}
// for(auto it=s.begin();it!=s.end();it++){
//     cout<<*it;
// }
ll q;
cin>>q;
auto it=s.begin();
while(q--){
    ll c;
    cin>>c;
      if(c==0){
        int v;
        cin>>v;
         s.insert(v);
         it=s.begin();
         cout<<*it<<endl;
    }
   else if(c==1){
     if(s.empty()){
        cout<<"Empty"<<endl;
    }
    else{
            cout<<*it<<endl;
    }
       
    }
    else if(c==2){
        s.erase(*it);
        it=s.begin();
        if(s.empty()){
        cout<<"Empty"<<endl;
    }
    else{
            cout<<*it<<endl;
    }
    
       
    }
}
get_out;
}