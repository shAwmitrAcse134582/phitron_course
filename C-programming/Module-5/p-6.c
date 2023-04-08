#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int mn,mx;
    if(a>=b&& a>=c)
    mx=a;
    else if(b>=a && b>=c)
    mx=b;
    else
    mx=c;

    if(a<=b && a<=c)
    mn=a;
    else if(b<=a && b<=c)
    mn=b;
    else
    mn=c;

    printf("%d %d",mn,mx);
return 0;
}