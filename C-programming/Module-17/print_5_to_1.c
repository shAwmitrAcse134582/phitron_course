#include<stdio.h>
void fun(int i){
    if(i==0){
        return;
    }
    fun(i-1);
    printf("%d\n",i);
    
    
}
int main()
{
    fun(5);
return 0;
}