#include<stdio.h>

int main(){
    int n, j = 0, c = 1, m, r = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    m = (n*(n+1))/2;

    for(int i=1; ;i++){
        j = (c*(c+1))/2;
        printf("%-4d", i);

        if(i == m)    
            r = 1;

        if(i == j){
            if(r == 0)  
                c++;
            else{
                c--; 
                i = (c*(c-1))/2;
            }
            printf("\n");
        }

        if(c == 0)
            break;
    }

    return 0;
}