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
for(int i=1;i<=n;i++){ //O(N)->complexiety
    int x=i;
    while(x!=0){//log(N)->complexiety
        int d=x%10;
        cout<<d<<" ";
        x/=10;
    }
    cout<<endl;
}
//Here total complexiety is->O(NlogN)
get_out;
}