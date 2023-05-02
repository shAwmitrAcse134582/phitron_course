#include<stdio.h>
int main()
{
    int x=10;
    int *p=&x;
    printf("x er address - %p\n",&x);
    printf("ptr er value - %p\n",p);
    printf("ptr er address - %p\n",&p);
    //Using dereffernce
    printf("x er value - %d\n",*p);
    x=100;
    //here x and *p are same.both print x's value
    printf("x er value - %d\n",*p);
    
    
return 0;
}