#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int ok=0;

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(a[i][j]!=1){
                       ok=1;
                       break;
                }
            }
            if(i!=j){
                if(a[i][j]!=0){
                    ok=1;
                    break;
                }
            }
        }
    }
    if(ok==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

return 0;
}