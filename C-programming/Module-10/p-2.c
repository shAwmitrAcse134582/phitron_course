#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    gets(s);
   
    int i=0;
    while(s[i]!='\\')
    {
        printf("%c",s[i]);
        i++;
    }
    
return 0;
}