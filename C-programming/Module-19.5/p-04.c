#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long int  a[n];
      for(long long int i=0;i<n;i++)
      {
        scanf("%lld",&a[i]);
      }
       long long int sum2=0;
    //    for(int i=0;i<k;i++){
    //      sum1+=a[i];
    //    }

   for(long long int i=0;i<n-1;i++){
         for(long long int j=i+1;j<n;j++){
           if(a[i]<a[j]){
            long long int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
           }
         }
   }
 
     for(long long int i=0;i<k;i++){
        if(a[i]<0){
            break;
        }
       sum2+=a[i];
     }
   
        printf("%lld",sum2);
     
    

return 0;
}