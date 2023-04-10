#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int e=0,o=0,p=0,q=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
        e++;
    }
    else{
        o++;
    }
    if(a[i]>0){
        p++;
    }
    else if(a[i]<0){
        q++;
    }

    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",q);
return 0;
}