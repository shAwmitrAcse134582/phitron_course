#include<stdio.h>
void fun(int x){
  printf("x er address - %p\n",&x);
  
}


int main()
{
    int x=10;
    printf("x er address - %p\n",&x);
    fun(x);
return 0;
}