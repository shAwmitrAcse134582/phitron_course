#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int mx=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=mx){
            mx=a[i];
        }
    }
    
    // printf("%d\n",mx);
    int cnt[101];
    for(int i=0;i<=mx;i++){
          cnt[i]=0;
    }
    // for(int i=0;i<mx;i++){
    //     printf("%d ",cnt[i]);
    // }

    for(int i=0;i<n;i++){
       
        cnt[a[i]]++;
        
    }

    for(int i=0;i<=mx;i++){
        
        if(cnt[i]==1){
          printf("%d : %d\n",i,cnt[i]);
        }
        
    }

return 0;
}