#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
int n;
cin>>n;
int c=0;
while(n!=0){//O(logN)
    int digit=n%10;
    cout<<digit;
    c++;
    n/=10;
}
cout<<endl;
cout<<c<<endl;
get_out;
}