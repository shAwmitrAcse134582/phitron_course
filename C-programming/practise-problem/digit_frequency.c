#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      char ch[1000];
      scanf("%s",ch);
    //   printf("%s",ch);
    int x;
      int cnt[10]={0};
       for(int i=0;i<strlen(ch);i++){
    //    printf("%c",ch[i]);
    if(ch[i]>='0' && ch[i]<='9'){
        int x=ch[i]-'0';
        // printf("%d ",x);
        cnt[x]++;
    }
    }    
       for(int i=0;i<10;i++){
        printf("%d ",cnt[i]);
       }
    return 0;
}