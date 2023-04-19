#include<stdio.h>
#include<string.h>
int main()
{
    char a[21],b[21];
    scanf("%s %s",&a,&b);
    int x=strcmp(a,b);
    if(x<1){
        printf("%s",a);
    }
    else{
        printf("%s",b);
    }

return 0;
}   