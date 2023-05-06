#include<stdio.h>
void world(){
    printf("WOrld start\n");
    printf("WOrld end\n");

}
void hello(){
    printf("Hello start");
    printf("\n");
    world();
     printf("Hello end\n");
}
int main()
{
    printf(" main program start\n");
    hello();

    printf(" main program end\n");
return 0;
}