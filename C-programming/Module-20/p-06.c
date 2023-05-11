#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=0,t=0,d=0;
    while(n--){
       int a,b;
       scanf("%d %d",&a,&b);
       if(a>b){
        t++;
       }
       else if(b>a){
        p++;
       }
       else{
        d++;
       }
    }
    if(t>p){
     printf("Tiger");
    }
    else if(t<p){
       printf("Pathan");
    }
    else if(t==p){
      printf("Draw");
    }
return 0;
}