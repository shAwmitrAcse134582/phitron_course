#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int flag=0;
    if(row!=col){
        flag=1;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i!=j){
                if(a[i][j]!=0){
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0){
        printf("diagonal Matrix");

    }
    else{
        printf("Not Diagonal Matrix");
    }
return 0;
}