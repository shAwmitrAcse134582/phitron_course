#include<stdio.h>
void rec(int i){
    if(i>5){//base case
        return;
    }
    printf("%d\n",i);
    rec(i+1);
}
int main()
{
    rec(1);
return 0;
}