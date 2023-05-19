#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int mx=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>mx){
            mx=a[i];
        }
    }
   for(int i=0;i<n;i++){
    printf("%d ",mx-a[i]);
   }
return 0;
}