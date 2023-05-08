#include<stdio.h>
void rec(int n){
    
  
   printf("%d ",n);
    while(n==2){
        return;
    }
    rec(n-1);
   
}
int main()
{
    int n;
    scanf("%d",&n);
   rec(n);
   printf("1");
return 0;
}