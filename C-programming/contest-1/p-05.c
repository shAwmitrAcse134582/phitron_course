#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        char s[10]="Not Found";
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int ans;
        int c=0;
        int x;
        scanf("%d",&x);
        for(int j=0;j<n;j++){
            if(x==a[j]){
                c=1;
             ans=j;
             break;
            }
            
        }
        if(c==1){
        printf("Case %d: %d\n",i,ans+1);
        }
        else{
            printf("Case %d: %s\n",i,s); 
        }
          
    }
return 0;
}