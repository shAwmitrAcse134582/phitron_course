#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float c=b/(1-(a/100.00));
    printf("%.2f\n",c);

return 0;
}