#include<stdio.h>
#include<string.h>
int main()
{
    char c[100001];
    scanf("%s",&c);
    int len=strlen(c);
    for(int i=0;i<len;i++){
        if(c[i]==','){
            printf(" ");
            continue;
        }
        else if(c[i]>='A' && c[i]<='Z'){
            printf("%c",c[i]+32);
        }
        else{
            printf("%c",c[i]-32);
        }
    }
return 0;
}