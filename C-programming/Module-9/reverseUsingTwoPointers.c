#include<stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int l=0;
    int r=n-1;
    int tmp;

    while(l<r){
      tmp=a[l];
      a[l]=a[r];
      a[r]=tmp;
      l++;
      r--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;
}