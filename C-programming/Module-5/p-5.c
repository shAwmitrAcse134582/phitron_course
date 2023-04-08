#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=65 && c<97){
        printf("ALPHA\nIS CAPITAL");
    }
    else if(c>=97 && c<=122){
        printf("ALPHA\nIS SMALL");
    }
    else{
        printf("IS DIGIT");
    }
return 0;
}