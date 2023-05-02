#include<stdio.h>
int main()
{
    double x=5.26;
    double *p=&x;
    printf("x er value- %0.2lf\n",x);
    printf("x er value- %0.2lf\n",*p);

    printf("x er size- %d\n",sizeof(p));

    *p=10.22;
      printf("x er value- %0.2lf\n",x);
    printf("x er value- %0.2lf\n",*p);


return 0;
}