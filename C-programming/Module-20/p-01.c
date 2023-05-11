#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int x=b+c+d;
    int y=a-x;
    if(a==0){
        printf("0\n");
    }
    else if(x>a){
        printf("0\n");
    }
    else{
        printf("%d\n",y);
    }
   
    }
   
return 0;
}