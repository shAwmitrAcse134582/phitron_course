#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0;
    int k=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=2*k-1;j++){
            printf("*");
           
        }
       
         printf("\n");
        s++;
        k--;
    

    }

return 0;
}