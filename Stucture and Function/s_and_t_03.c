//Passing pointers to a structures as argument

#include<stdio.h>
struct point 
{
    int x;
    int y;
};

void print(struct point *ptr)
{
    printf("%d %d \n",ptr->x,ptr->y);
}


int main()
{
    struct point p1={ 18,81 };
    struct point p2={ 19,91 };
    print(&p1);
    print(&p2);
    return 0;
}