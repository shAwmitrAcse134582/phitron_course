#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    gets(name);
    printf("%s",name);
    printf("\n");

    char a[25];
    fgets(a,23,stdin);
    printf("%s",a);

return 0;
}