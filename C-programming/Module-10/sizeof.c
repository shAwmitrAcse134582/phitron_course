#include<stdio.h>
int main()
{
    int a=5;
    printf("%d\n",sizeof(a));
    int ar[5]={1,2,3,4,5};
    printf("%d ",sizeof(ar));

    char ch[10];
    for(int i=0;i<10;i++)
    {
    scanf("%c",&ch[i]);
    }

    for(int i=0;i<9;i++){
        printf("%c",ch[i]);
    }
    printf("\n");

    printf("%d",sizeof(ch));
    

return 0;
}