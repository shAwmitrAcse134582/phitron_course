#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void reverseprint(stringstream & ss){
    string word;
    if(ss>>word){
       reverseprint(ss);
       cout<<word<<endl;
    }
}
int main()
{
fast;
string s;
getline(cin,s);
stringstream ss(s);
reverseprint(ss);
get_out;
}