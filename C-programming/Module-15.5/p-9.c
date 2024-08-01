#include<stdio.h>
#include<math.h>
int check_prime(long long int n)
{
    int x=0;
    int d=sqrt(n);
    for(long long int i=2;i<=d;i++){
        if(n%i==0){
            x=1;
            break;
        }
    }
    return x;

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        if(n==1){
            printf("NO\n");
            continue;
        }
       int ok= check_prime(n);
       if(ok==1){
           printf("NO\n");
       }
       else{
        printf("YES\n");
       }
    }
return 0;
}