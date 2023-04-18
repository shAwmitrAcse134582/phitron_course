#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
  int cnt[25]={0};
  for(int i=0;i<strlen(s);i++){
    int val=s[i]-'a';
    cnt[val]++;
  }
  for(int i=0;i<25;i++){
    if(cnt[i]!=0){
          printf("%c : %d\n",i+'a',cnt[i]);
    }
    
  }


return 0;
}