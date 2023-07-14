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
while(t--)
{
    stack<char>s1,s2;
   int n;
   cin>>n;
   while(n--){
       char c;
       cin>>c;
       if(s1.empty()){
        s1.push(c);
       }
       
        else{
                if((c=='R' && s1.top()=='B') || (c=='B' && s1.top()=='R')){
                    s2.push('P');
                   s1.pop();  
        }

        else if((c=='R' && s1.top()=='G') || (c=='G' && s1.top()=='R')){
            s2.push('Y');
            s1.pop();
           
        }
        else if((c=='B' && s1.top()=='G') || (c=='G' && s1.top()=='B')){
            s2.push('C');
            s1.pop();
            
        }
        else if(c==s1.top()){
            s1.pop();
            
        }
        else{
            s2.push(c);
        }

        }         
}
     while(!s2.empty()){
        if(s1.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        else{
          if(s2.top()==s1.top()) {
               s2.pop();
               s1.pop();
          }
          else{
            s1.push(s2.top());
            s2.pop();
          }
        }
        
       }  
     while(!s1.empty()){
       cout<<s1.top();
       s1.pop();
       }
       cout<<endl; 
  
}
get_out;
}