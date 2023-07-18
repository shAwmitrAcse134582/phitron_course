#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
priority_queue<int>p;
while(true){
    int c;
    cin>>c;
    if(c==0){
        int x;
        cin>>x;
        p.push(x);

    }
    else if(c==1){
        p.pop();
    }
    else if(c==2){
        cout<<p.top()<<endl;
    }
    else{
        break;
    }
}
get_out;
}