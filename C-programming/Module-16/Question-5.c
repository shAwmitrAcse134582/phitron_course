//Answer to the question number - 5
#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){
    int x=0;
    while(s[x]!='\0'){
        x++;
    }
    int c=0;
    int left=0,right=x-1;
    while(left<right){
        if(s[right]!=s[left]){
             c=1;
            break;
        }
        left++;
        right--;      
    }
    if(c==1){
        return 0;
    }
    else{
        return 1;
    }
       
}

int main()
{
    char s[10];
    
    scanf("%s",&s);
    int flag;
    
    flag = is_palindrome(s);
     
    if(flag==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }

return 0;
}