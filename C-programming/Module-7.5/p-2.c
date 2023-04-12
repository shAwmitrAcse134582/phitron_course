#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,c=0,ans;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            c=1;
            ans=i;
            break;
        }

    }
    if(c!=0){
        printf("%d",ans);
    }
    else{
        printf("-1");
    }
return 0;
}