#include<stdio.h>
long long rec(long long int a[],long long int n,long long int i){
    while(i==n){
        return 0;
    }
     long long int sum= a[i] + rec(a,n,i+1);
     return sum;    
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(long long int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
  long long int x =  rec(a,n,0);
  printf("%lld",x);
return 0;
}