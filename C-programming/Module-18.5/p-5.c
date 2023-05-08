#include<stdio.h>
void rec(long long int a[],long long int n,long long int i, long long int sum){
 
    while(i==n){
        return;
    }
     
     
     rec(a,n,i+1,sum+=a[i]);

     printf("%lld ",sum);

     
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(long long int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    rec(a,n,0,0);
return 0;
}