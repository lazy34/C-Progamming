//ASSIGNMENT POINTER
#include<stdio.h>
void main()
{
    int a=10,b=11;
    int *p,*q;
    p=&a,q=&b;
    *q=*p;
    printf("a=%d %d %d",a,*p,*q);
}