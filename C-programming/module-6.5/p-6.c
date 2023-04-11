#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d ",&a,&b,&c);
    int mn=0;
    if(a<b && a<c)
    mn=a;
    else if(b<a && b<c)
    mn=b;
    else
    mn=c;
    
    int y;
    int x=a/2;
    if(x<c)
        y=x;
    else{
        y=c;
    }
  int mx;
    if(x<b && x<c){
      mx=x;
    }
    else if(b<x && b<c){
        mx=b;
    }
    else
    mx=c;

    // printf("%d",min(y,min(mn,mx)));
    if(y>mn && y>mx)
    printf("%d",y);
    else if(mn>y && mn>mx){
        printf("%d",mn);
    }
    else{
        printf("%d",mx);
    }



return 0;
}