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
int frq[26]={0};
for(int i=0;i<n;i++){
    char c;
    cin>>c;
    frq[c-'a']++;
}
for(char i='a';i<='z';i++)
{
    if(frq[i-'a']>0)
    {
        for(int j=0;j<frq[i-'a'];j++){
            cout<<i;
        }
    }
}
get_out;
}