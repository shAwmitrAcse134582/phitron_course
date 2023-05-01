#include<stdio.h>

char conversion(char c){
    char ans;
    if(c>='a' && c<='z'){
        ans=c-32;  
    }
    else{
        ans=c+32;
    }
}
int main()
{
    char c;
    scanf("%c",&c);
    char res=conversion(c);
    printf("%c",res);
return 0;
}