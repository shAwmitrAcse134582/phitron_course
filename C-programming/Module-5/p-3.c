#include<stdio.h>
int main()
{
    char c,ch;
    scanf("%c",&c);
    // ch=tolower(c);
    if(c>=65 && c<97)
    ch=c+32;
    else
    ch=c-32;
    printf("%c",ch);
    

return 0;
}