#include<stdio.h>
int min(int a[],int n){
    int mn=1000001;
    for(int i=0;i<n;i++){
        if(a[i]<mn){
            mn=a[i];
        }
    }
    return mn;
}
int max(int a[],int n){
    int mx=-1000001;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    return mx;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int mn=min(a,n);
    int mx=max(a,n);
    printf("%d %d",mn,mx);
return 0;
}