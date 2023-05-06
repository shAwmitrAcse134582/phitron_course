// #include<stdio.h>
// int fun(char s[],int i){
//     if(s[i]=='\0'){
//         return;
//     }
//    int len = fun(s,i+1);
//    return len+1;
// }
// int main()
// {
//     char s[10]="shawmitra";
//   int length =  fun(s,0);
//   printf("%d",length);
// return 0;
// }


#include<stdio.h>
void f2()
{
    printf("f1 ");
}
void f1()
{
    printf("f2 ");
    f2();
}
int main()
{
    printf("Main ");
    f1();   
}