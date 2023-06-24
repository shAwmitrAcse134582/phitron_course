#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class myStack{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        if(l.size()==0)
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
for(int i=0;i<n;i++)
{
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