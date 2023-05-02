#include<stdio.h>
void fun(int a[],int sz){
    for(int i=0;i<sz;i++){
         printf("%d ",a[i]);
    }
    

}
int main()
{
    int a[]={1,2,3,4,5,6};
    fun(a,sizeof(a)/sizeof(int));
return 0;
}