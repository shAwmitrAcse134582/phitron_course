#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mx=0;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>mx){
            mx=a[i];
        }
    }
    printf("%d",mx);
return 0;
}