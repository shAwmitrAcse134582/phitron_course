#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            printf("%d",k);
        }
        k--;
       printf("\n");
    }
    
return 0;
}