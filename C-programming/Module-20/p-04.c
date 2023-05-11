#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int x=strlen(s);
    int c=0,d=0,b=0;
    for(int i=0;i<x;i++){
       if(s[i]>='A' && s[i]<='Z'){
            c++;
       }
       else if(s[i]>='a' && s[i]<='z'){
        d++;
       }
       else{
        b++;
       }

    }
    printf("Capital - %d\n",c);
    printf("Small - %d\n",d);
    printf("Spaces - %d\n",b);
return 0;
}