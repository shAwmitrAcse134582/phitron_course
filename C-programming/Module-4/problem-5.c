#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n-1000;
    if(x>=500){
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else if(x>0){
        printf("I will buy Punjabi");
    }
    else{
        printf("Bad luck!");
    }
return 0;
}