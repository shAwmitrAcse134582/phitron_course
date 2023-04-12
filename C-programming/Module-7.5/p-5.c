#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int ans;
    int mn=__INT_MAX__;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<mn){
            mn=a[i];
            ans=i;
        }
    }
    printf("%d %d",mn,ans+1);
return 0;
}