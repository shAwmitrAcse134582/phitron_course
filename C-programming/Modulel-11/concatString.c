#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    int len1=strlen(a);
    int len2=strlen(b);
    for(int i=0;i<=3;i++){
        a[i+len1]=b[i];
    }
    // strcat(a,b);
    a[len1+4]='\0';
    printf("%s",a);
return 0;
}