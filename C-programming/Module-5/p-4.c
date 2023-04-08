#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n/1000;
    // printf("%d",x);
    if(x%2==0)
    printf("EVEN");
    else{
        printf("ODD");
    }
return 0;
}