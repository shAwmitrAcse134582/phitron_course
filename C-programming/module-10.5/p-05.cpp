#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
string s1,s2,s3;
cin>>s1>>s2;
s3=s1+s2;
cout<<s1.size()<<" "<<s2.size()<<endl;
cout<<s3<<endl;
char tmp= s1[0];
s1[0]=s2[0];
s2[0]= tmp;
cout<<s1<<" ";
cout<<s2<<endl;

get_out;
}