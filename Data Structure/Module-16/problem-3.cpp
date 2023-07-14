#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
queue<string>q;
int n;
cin>>n;
while(n--){
    int x;
    cin>>x;
    if(x==0){
        string name;
        cin>>name;
        q.push(name);
    }
    else{
        if(q.empty()){
            cout<<"Invalid"<<endl;
        }
        else{
            cout<<q.front()<<endl;
            q.pop();
        }
    }
}
get_out;
}