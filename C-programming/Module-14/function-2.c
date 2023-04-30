//return type + no parameter
#include<stdio.h>
int add(){
    int x,y;
    scanf("%d %d",&x,&y);
    return x+y;
}
int main()
{
  int res=add();
  printf("%d",res);
return 0;
}