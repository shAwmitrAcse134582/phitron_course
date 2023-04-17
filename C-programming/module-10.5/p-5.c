#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    int len1=strlen(a);
    int len2=strlen(b);
     printf("%d %d\n",len1,len2);
     printf("%s%s\n",a,b);
    
    
    char t=a[0];
    a[0]=b[0];
    b[0]=t;
   
    printf("%s %s",a,b);
return 0;
}