#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
             printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        s--;
        k=k+2;
        printf("\n");
    }

    s=1;
    k=n-1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
             printf(" ");
        }
        for(int j=1;j<=k*2-1;j++){
            printf("*");
        }
        s++;
        k--;
        printf("\n");
    }

return 0;
}