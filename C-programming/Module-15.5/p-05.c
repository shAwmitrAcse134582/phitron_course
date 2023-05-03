#include<stdio.h>
int my_abs(int n){
    if(n==0){
        return 0;
    }
    else if(n>0){
        return n;
    }
    else{
        return -1*n;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=my_abs(n);
    printf("%d",x);
return 0;
}