#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int mn=__INT_MAX__;
    int mx=-1001;
    int x,y;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>mx){
            mx=a[i];
            x=i;

        }
        
    }
    for(int i=0;i<n;i++){
        if(a[i]<mn){
            mn=a[i];
            y=i;
        }
    }
    int temp=a[x];
    a[x]=a[y];
    a[y]=temp;

   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
return 0;
}