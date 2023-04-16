#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    int i=0,c=0;
    //Using for loop
    // for(int i=0;a[i]!='\0';i++){
    //     c++;

    // }

    // using While loop
    while (a[i]!='\0')
    {
        c++;
        i++;
    }
    int len=strlen(a);
    printf("%d\n",len);
    
    printf("%d",c);
    
return 0;
}