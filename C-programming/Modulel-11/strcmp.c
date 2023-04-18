#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int ans=strcmp(a,b);
    printf("%d\n",ans);
    if(ans<0){
        printf("B is greatest");
    }
    else if(ans>0){
        printf("A is Bigger");
    }
    else {
     printf("Both are same");
    }
return 0;
}