#include<stdio.h>
#include<limits.h>
long long int max(long long int a[],long long int n,long long int i){

if(i==n){
    return INT_MIN;
}

long long int mx=max(a,n,i+1);
if(a[i]>mx){
   return a[i];
}
else{
     return mx;
}

}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    long long int ans=max(a,n,0);
    printf("%lld",ans);

return 0;
}