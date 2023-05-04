//No return + parameter
#include<stdio.h>
void print_odd(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
    }
}
int main()
{

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    print_odd(a,n);
return 0;
}