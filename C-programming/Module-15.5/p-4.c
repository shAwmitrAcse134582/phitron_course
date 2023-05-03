#include<stdio.h>
void sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
              int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
           
        }
        
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
int main()
{
    int a[3];
    int n=3;
    int b[3];
   
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++){
        b[i]=a[i];
    }
    //  b[0]=a[0];
    // b[1]=a[1];
    // b[2]=a[2];
    sort(a,n);
    printf("\n");

       for(int i=0;i<3;i++){
        printf("%d\n",b[i]);
    }
    // printf("%d\n",b[0]);
    // printf("%d\n",b[1]);
    // printf("%d\n",b[2]);

    
return 0;
}