#include<stdio.h>
void fun(int *p){
    printf("x er address - %p\n",p);
    *p=100;
}
int main()
{
    int x=10;
    printf("x er address - %p\n",&x);
    fun(&x);
    printf("%d",x);
return 0;
}