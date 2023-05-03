#include<stdio.h>
#include<string.h>
int my_len(char s[]){
    int c=0;
    int i=0;
    while(s[i]!='\0'){
        c++;
        i++;
    }
    return c;
}
int main()
{
    char s[100];
    scanf("%s",s);
    int x=my_len(s);
    printf("%d",x);
return 0;
}