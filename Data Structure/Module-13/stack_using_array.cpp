#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

class myStack{
    public:
   vector<int>v;
   void push(int val){
    v.push_back(val);
   }
   void pop(){

    v.pop_back();
   
   }
   int top(){
    return v.back();
   }
   int size(){
    return v.size();
   }
   bool empty(){
    if(v.size()==0)
    return true;
    else 
    return false;
   }

};
int main()
{
fast;

myStack st;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
}
while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}


get_out;
}