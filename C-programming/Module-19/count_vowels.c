#include<stdio.h>
#include<string.h>
int fun(char s[],int i){
    while(s[i]=='\0'){
        return 0;
    }
    int ans=fun(s,i+1);
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
       return ans+1;
    }
    else{
        return ans;
    }
}
int main()
{
    char s[201];
    fgets(s,201,stdin);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i]<='Z'){
              s[i]=s[i]+32;
        }
    }
    int ans=fun(s,0);
    printf("%d",ans);
return 0;
}