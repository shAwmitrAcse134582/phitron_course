#include<stdio.h>
#include<string.h>
int main()
{
    char c[1001];
    scanf("%s",c);
    int cnt[26]={0};
    for(int i=0;i<strlen(c);i++){
        int val=c[i]-'a';
        cnt[val]++;
    }
    for(int i=0;i<26;i++){
        printf("%c - %d\n",i+'a',cnt[i]);
    }

return 0;
}