#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class myStack1{
    public:
    vector<int>v;
     void push(int x){
        v.push_back(x);
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

class myStack2{
    public:
    vector<int>v;
     void push(int x){
        v.push_back(x);
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
myStack1 st1;
int n;
cin>>n;
for(int i=0;i<n;i++){
     int x;
     cin>>x;
     st1.push(x);
}
myStack2 st2;
int m;
cin>>m;
for(int i=0;i<m;i++){
     int y;
     cin>>y;
     st2.push(y);
}
bool ok=false;
while(!st1.empty()){
     if(st1.top()!=st2.top()){
        ok=true;
        break;
     }
     st1.pop();
     st2.pop();
}
if(ok){
     cout<<"NO"<<endl;
}
else{
     cout<<"YES"<<endl;
}

get_out;
}