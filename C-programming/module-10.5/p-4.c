#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int len=strlen(s);
    int l=0;
    int r=len-1;
    int c=0;
    while(l<r){
        if(s[l]!=s[r]){
           c=1;
           break;
        }
       l++;
       r--;
    }
    if(c==1){
        printf("NO");
    }
    else{
        printf("YES");
    }
return 0;
}