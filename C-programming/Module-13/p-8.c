#include<stdio.h>
int main()
{
    int n;
   scanf("%d",&n);
   int a[n];
   int x;
   scanf("%d",&x);
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int c=0;
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==x){
            c=1;
            break;
        }
    }
   }
   if(c==1){
    printf("YES");
   }
   else
   printf("NO");
return 0;
}