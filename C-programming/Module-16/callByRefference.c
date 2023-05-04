//Call By refference
//ans:when we pass the address of variable from the main function
//and user defined function's parameter receive the address through the parameter,
//then it's called called by refference.if we change the value of the variable,then main
//function's value is changed.

void sum(int *n) {    
    printf("Before sum 100 inside function n=%d\n",*n);    
    *n=*n+100;    
    printf("After sum 100 inside function n=%d\n",*n);    
}    
#include<stdio.h>
int main() {    
    int n=10;    
    printf("main value before call function n=%d\n", n);    
    sum(&n);    
    printf("After function call n=%d\n", n);    
return 0;  
}

