#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char c[101];
        scanf("%s",&c);
        
        int len=strlen(c);
        if(len<=10){
            printf("%s\n",c);
        }
        else{
             printf("%c%d%c\n",c[0],len-2,c[len-1]);
        }
        
    }
return 0;
}