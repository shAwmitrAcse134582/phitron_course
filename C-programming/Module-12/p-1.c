#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            c1++;
        }
        else{
            c2++;
        }
    }
    printf("%d %d",c1,c2);
return 0;
}