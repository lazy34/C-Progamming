//%(Address of) and *(Indirection) Operator
#include<stdio.h>
void main()
{
    int a=10,b=9;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Value of a=%d",a);
    printf("\nValue of a=%d",*p);
    printf("\nAddress of a=%x",&a);
    printf("\nAddress of a=%x",p);
    printf("\nAddress of p=%x",&p);
}