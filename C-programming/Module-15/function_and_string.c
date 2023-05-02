#include<stdio.h>
#include<string.h>
void fun(char ch[]){
    printf("%d",strlen(ch));
}
int main()
{
    char ar[20]="Hello";
    fun(ar);
return 0;
}

