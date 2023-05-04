//Answer to the question number - 4

//has return + has parameter

#include<stdio.h>
int count_vowels(char s[]){
    int len=0;
    while(s[len]!='\0'){
        len++;
    }
    int count=0;
    for(int i=0;i<len;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
             count++;
        }
    }
   return count; 

}
int main()
{
    char s[100];
    scanf("%s",s);
    int ans=count_vowels(s);
    printf("%d",ans);
return 0;
}


