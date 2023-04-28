#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int c1=0,c2=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i]<='Z'){
            c1++;
        }
        else{
            c2++;
        }

    }
    printf("%d %d",c1,c2);
return 0;
}