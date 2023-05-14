#include<stdio.h>
int main()
{
  long long  int t;
    scanf("%d",&t);
    while(t--){
        long long int x,y;
        scanf("%lld %lld",&x,&y);
        long long int sum1=(x*(x+1))/2;
        long long int sum2=(y*(y+1))/2;

        printf("%lld\n",sum2-sum1+x);

    }
return 0;
}