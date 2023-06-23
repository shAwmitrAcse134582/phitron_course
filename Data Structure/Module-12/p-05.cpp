#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
list<string>l;
string s;
while(true){
    cin>>s;
    if(s=="end"){
        break;
    }
    else{
        l.push_back(s);
    }
}
int q;
cin>>q;

string s1,s2;
cin>>s1>>s2;
//fixed output
cout<<s2<<endl;
list<string>::iterator it,tmp;
for(it=l.begin();it!=l.end();it++){
    if(*it==s2){
        tmp=it;
        break;
    }
}

q=q-1;
while(q--){
    string st1,st2;
    cin>>st1;
    if(st1[0]=='v'){
        cin>>st2;
    }
    else {
        st2=st1;
    }
    bool left=false,right=false;
    //previous paile
    if(st2=="prev"){
        if(left){
          // cout << 1 << endl;
        cout << "Not Available" << endl;
        tmp=l.begin();

      }
      else if(tmp != l.begin() && !left ){
        tmp--;
          // cout << 2 << endl; 
        cout << *tmp << endl;

      }
      else{
          cout << "Not Available" << endl;
        tmp=l.begin();
        left = true;

      }
    
}
//next paile
else if(st2=="next"){
    auto it2=l.end();
    it2--;
      if(right){
        cout << "Not Available" << endl;
        tmp=l.end();
        tmp--;    
      }
      else if(tmp !=it2 &&!right ){
          tmp++;
        cout << *tmp << endl;
      }
      else{
         cout << "Not Available" << endl;
        right = true;
         tmp=l.end();
        tmp--;

      }
    }
    else{
      bool ok=false;
       for( it = l.begin();it != l.end();it++ ){
          if( *it == st2 ){
            tmp= it;
            cout << st2 << endl;
            left=false;
            right=false;
            ok=true;
            break;
          }
          
        }
        if(!ok)cout << "Not Available" << endl;
    }
}
get_out;
}