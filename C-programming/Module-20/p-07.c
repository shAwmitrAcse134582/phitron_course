#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
   if(n%2==0){
    int x=a[n/2-1];
    int y=a[n/2];
    printf("%d %d\n",x,y);
   }
   else{
    int z=a[n/2];
    printf("%d\n",z);
   }
return 0;
}