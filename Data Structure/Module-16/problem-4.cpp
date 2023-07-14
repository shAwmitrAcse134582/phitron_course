#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
stack<char>st;
int q;
cin>>q;
while(q--){
    string s;
    cin>>s;
    for(auto c:s){
        if(st.empty()){
            st.push(c);
        }
        else{
            if((c=='A' && st.top()=='B') || (c=='B' && st.top()=='A')){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
    }
    if(st.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    while(!st.empty()){
        st.pop();
    }
   
}

get_out;
}