#include<stdio.h>
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    long long a[n][m];
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            scanf("%lld",&a[i][j]);
        }
    }

      for(long long i=0;i<n;i++){
        for(long long j=m-1;j>=0;j--){
           printf("%lld ",a[i][j]);
        }
        printf("\n");
    }

return 0;
}