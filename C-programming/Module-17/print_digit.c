#include<stdio.h>
#include<string.h>
void rec(long long int n){
    while(n==0){
        return;
    }
    rec(n/10);
    long long int x=n%10;
    printf("%lld ",x);

   
       
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        if(n==0){
            printf("0");
        }
        else{
           rec(n);
        }
        
         printf("\n");

    }
return 0;
}