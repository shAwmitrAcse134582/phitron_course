#include<stdio.h>
void rec(long long int a[],long long int n,long long int i)
{
    while(i==n){
        return;
    }
    rec(a,n,i+1);
      if(i%2==0){
        printf("%lld ",a[i]);
      }
      
}
int main()
{
    long long int  n;
    scanf("%lld",&n);
    long long int a[n];
     for(long long int i=0;i<n;i++){
        scanf("%lld",&a[i]);
     }
     rec(a,n,0);
     printf("\n");

return 0;
}