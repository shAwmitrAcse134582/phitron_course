#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class student{
    public:
    int x;
    student(int x){
        this->x=x;
    }
};
class cmp{
    public:
 bool operator()(student a, student b)
    {
     
       return a.x>b.x;
    }

};
int main()
{
fast;
ll n;
cin>>n;

priority_queue<student,vector<student>, cmp>p;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    student obj(x);
    p.push(obj);
}
// while(!p.empty()){
// cout<<p.top().x<<endl;
// p.pop();
// }

ll q;
cin>>q;
while(q--){
    ll c;
    cin>>c;
    if(c==0){
        int v;
        cin>>v;
        student obj(v);
        p.push(obj);
        if(p.empty()){
            cout<<"Empty"<<endl;
        }
        else{
                cout<<p.top().x<<endl;
        }
        
    }
    else if(c==1){
        if(p.empty()){
            cout<<"Empty"<<endl;
        }
        else{
            cout<<p.top().x<<endl;
        }
    }
    else if(c==2){
        if(p.empty()){
            cout<<"Empty"<<endl;
        }
        else{
         p.pop();
         if(p.empty()){
            cout<<"Empty"<<endl;
         }
         else{
            cout<<p.top().x<<endl;
         }
        
        }
        
        
    }
}

get_out;
}