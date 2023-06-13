#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void fun(int *&p){
    *p=20;
}
int main()
{
fast;
int val=10;
int *ptr=&val;
fun(ptr);
cout<<val<<endl;
get_out;
}