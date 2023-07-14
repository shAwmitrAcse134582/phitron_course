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
int n;
cin>>n;
queue<char>q;
while(n--){
    char c;
    cin>>c;
    q.push(c);
}
string s="";
while(!q.empty()){
    char x=q.front();
    q.pop();
    char y=q.front();
    if(x=='B' && y=='R' || x=='R' && y=='B'){
        s+='P';
    }
    else if(x=='R' && y=='G' || x=='G' && y=='R'){
        s+='Y';
    }
    else if(x=='B' && y=='G' || x=='G' && y=='B'){
        s+='C';
    }
    else if(x=='B' && y=='B' || x=='G' && y=='G' || x=='R' && y=='R'){
        s+=" ";
    }
    else{
        s+=x;
    }
 
    
}
cout<<s<<endl;
}



get_out;
}