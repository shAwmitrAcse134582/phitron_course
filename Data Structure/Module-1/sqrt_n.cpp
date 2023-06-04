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
 int c=0,d=0;
 for(int i=1;i<=sqrt(n);i++)//O(logN)->complexiety
 {
    if(n%i==0){
        cout<<i<<" ";
        d++;
        if(n/i!=i){
            cout<<n/i<<endl;
              c++;
        }
    }
    
 }
 cout<<c+d<<endl;
get_out;
}