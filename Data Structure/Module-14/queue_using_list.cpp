#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class myQueue{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};
int main()
{

fast;
myQueue q;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    q.push(x);
}
while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
}

get_out;
}