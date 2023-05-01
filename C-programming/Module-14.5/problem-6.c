#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    int s=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k*2-1;j++){
            printf("*");
        }
        printf("\n");

        k--;
        s++;
    }
return 0;
}