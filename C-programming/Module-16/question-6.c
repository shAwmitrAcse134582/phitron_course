//answer to the qustion number-6
// *call by value
// *ans:when we pass a variable from main function to user defined function,
// the user defined function only recieves only it's value.In this case,if we change the 
// value,the main function's value does not effected by this work.

//example
#include<stdio.h> 
void sum(int n) {    
    printf("Before sum 100 inside function n=%d\n",n);    
    n=n+100;    
    printf("After sum 100 inside function n=%d\n",n);    
}  
 
int main() {    
    int n=10;    
    printf("main value before call function n=%d\n", n);    
    sum(n);    
    printf("After function call n=%d\n", n);    
return 0;  
} 



