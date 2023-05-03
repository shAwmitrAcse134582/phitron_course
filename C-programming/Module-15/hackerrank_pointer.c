#include<stdio.h>
void fun(int *a,int*b){
  printf("%d %d",*a+*b,abs(*a-*b));


}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    fun(&a,&b);
return 0;
}