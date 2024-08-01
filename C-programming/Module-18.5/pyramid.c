#include<stdio.h>
void rec(int n,int s,int k,int i){
      while(i>n){
        return;
      }
      printf(" ");
      printf("*");
      rec(n,s-1,k+2,i+1);
      
}
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    rec(n,s,k,0);
return 0;
}