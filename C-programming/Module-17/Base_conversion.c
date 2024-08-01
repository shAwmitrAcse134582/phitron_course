#include<stdio.h>

void rec(long long int n){
    while(n==0){
        return;
    }
    long long int x=n%2;
    
    rec(n/2);  
    
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
       if(n==1){
        printf("1\n");
       }else{
         rec(n);
       }
          
         printf("\n");

    }
return 0;
}