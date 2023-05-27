#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
string s;
getline(cin,s);
stringstream ss(s);
int wordcnt=0;
string word;
ll mxsz=0;
while(ss >> word){
    cout<<word<<endl;
    ll x=word.size();
    //finding maximum word size
    mxsz=max(mxsz,x);
    wordcnt++;
}
cout<<wordcnt<<endl;
cout<<mxsz<<endl;
get_out;
}