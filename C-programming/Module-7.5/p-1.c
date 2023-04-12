#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    long long int sum=0;
    for(long long int i=0;i<n;i++){
        scanf("%lld",&a[i]);
         sum+=a[i];
    }
    //  printf("%lld",abs(sum));
    if(sum>=0){
         printf("%lld",sum);
    }
    else{
        printf("%lld",-sum);
    }
   
return 0;
}