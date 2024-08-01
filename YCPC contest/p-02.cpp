#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
// const int N=1e5+7;
int main()
{
fast;
ll x;
cin>>x;

ll n=4+x;

int s=n-1;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
             printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        s--;
        k=k+2;
        printf("\n");
    }
    

  

get_out;
}