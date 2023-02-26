        //Passing structure variable as argument
                    //CALL BY VALUE:
                
#include<stdio.h>
struct point 
{
    int x;
    int y;
};

void print(struct point p)
{
    printf("%d %d \n",p.x,p.y);
}


int main()
{
    struct point p1={ 18,81 };
    struct point p2={ 19,91 };
    print(p1);
    print(p2);
    return 0;
}