#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n;
cin>>n;
int a[26]={0};
for(int i=0;i<n;i++){
    char ch;
    cin>>ch;
    a[int(ch)-'a']++;
}

for(int i=0;i<26;i++){
    while(a[i]!=0){
       cout<<char(i+'a');
       a[i]--;
    }
}

get_out;
}