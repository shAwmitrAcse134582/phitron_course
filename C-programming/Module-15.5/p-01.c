#include<stdio.h>
int fun(int a,int b){
    return a+b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
   int x= fun(a,b);
   printf("%d",x);
return 0;
}