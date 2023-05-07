#include<stdio.h>
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

   for(int i=0;i<3;i++){
    printf("%d ",a[2][i]);
   }
   printf("\n");

   for(int i=0;i<3;i++){
    printf("%d\n",a[i][2]);
   }
return 0;
}