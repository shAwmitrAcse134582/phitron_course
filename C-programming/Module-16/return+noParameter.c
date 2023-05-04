//Has return + No parameter

#include<stdio.h>
int count_even(){
   int n;
   scanf("%d",&n);
   int a[n];
   int count=0;
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){
        count++;
    }
   }
   return count;
}
int main()
{
  int x = count_even();
  printf("%d",x);
return 0;
}