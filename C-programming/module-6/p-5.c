#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mul=1;
    for(int i=1;i<=12;i++){
        mul=n*i;
        printf("%d * %d = %d\n",n,i,mul);
    }
return 0;
}