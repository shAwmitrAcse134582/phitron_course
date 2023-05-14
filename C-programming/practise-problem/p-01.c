#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0 && b==0){
        printf("NO");
    }
    else{
          int x=abs(a-b);
    if(x==0 || x==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    }
    
return 0;
}