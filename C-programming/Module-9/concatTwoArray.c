#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    int ans[n+m];
    for( int i=0;i<n+m;i++){
        ans[i]=a[i];
    }
    int k=n;
    for(int j=0;j<m;j++){
        ans[k]=b[j];
        k++;
    }
    for(int i=0;i<n+m;i++){
        printf("%d ",ans[i]);
    }

return 0;
}