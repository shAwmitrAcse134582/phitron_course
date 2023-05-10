#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
long long int a[n];
for(long long int i=0;i<n;i++){
    scanf("%lld",&a[i]);
}
for(long long int i=0;i<n-1;i++){
         for(long long int j=i+1;j<n;j++){
           if(a[i]>a[j]){
            long long int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
           }
         }
   }
//    for(long long int i=0;i<n;i++){
//     printf("%lld",a[i]);
//    }
long long int x=a[0];
long long int c=0;
for(long long int i=0;i<n;i++){
    if(x==a[i]){
        c++;
    }
}
if(c%2==0){
printf("Unlucky");
}
else{
printf("Lucky");
}
return 0;
}