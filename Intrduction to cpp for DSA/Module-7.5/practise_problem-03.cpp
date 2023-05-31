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
// getchar();
stringstream ss(s);
string str;
cin>>str;
string word;
int cnt=0;
while(ss>>word){
 
    if(word==str){
        cnt++;
    }
}

cout<<cnt<<endl;
get_out;
}