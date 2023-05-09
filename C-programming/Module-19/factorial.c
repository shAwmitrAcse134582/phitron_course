#include<stdio.h>
 long long int fact(long long int n)
{ 
    //base case
    while(n==0){
        return 1;
     }
   return n*fact(n-1);
     
}
int main()
{
    long long int n;
    scanf("%lld",&n);
 long long int x =  fact(n);

 printf("%lld",x);
return 0;
}