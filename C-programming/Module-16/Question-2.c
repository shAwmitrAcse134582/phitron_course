//Answer to the question number-2
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=x;j++){
            printf("%d",x);
        }
        x++;
        s--;
        printf("\n");
    }
return 0;
}