// "To live is to suffer, to survive is to find some meaning in the suffering."
#include<bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
#define mod 1000000007
const int N =  1e5;



int main() {
    boost;

   list<string> l;
   while(true){
    string s;
    cin >> s;
    if(s=="end")break;

    l.pb(s);
   }

   ll q;
   cin >> q;
   q=q-1;
  list<string>::iterator it,temp;
  string s1,s2;
  cin >> s1 >> s2;

  cout << s2 << endl;
   for( it = l.begin();it != l.end();it++ ){
    // cout << *it << "HELL" << endl;
    if( *it == s2 ){
      temp= it;
      break;
    }
   }



   while(q--){
    string st,st2;
    cin >> st;
    if(st[0]=='v'){
      cin>> st2;
    }
    else st2=st;




    bool left=false,right=false;
    if(st2=="prev"){
    
     

      if(left){
          // cout << 1 << endl;
        cout << "Not Available" << endl;
        temp=l.begin();

      }

      else if(temp != l.begin() && !left ){
        temp--;
          // cout << 2 << endl;
        
        cout << *temp << endl;

      }
      else{
          cout << "Not Available" << endl;
        temp=l.begin();
        left = true;

      }
    }

      else if(st2=="next"){
     

      if(right){
        cout << "Not Available" << endl;
        temp=l.end();
        temp--;
        
      }

      else if(temp != --l.end() && !right ){
          temp++;
        cout << *temp << endl;
      }
      else{
         cout << "Not Available" << endl;
        right = true;
         temp=l.end();
        temp--;

      }
    }

    else{
      bool paici = false;
       for( it = l.begin();it != l.end();it++ ){
          if( *it == st2 ){
            temp= it;
            cout << st2 << endl;
            left=false;
            right=false;
            paici = true;
            break;
          }
          
        }
        if(!paici)cout << "Not Available" << endl;

    }
 

   }


   



  
    
}