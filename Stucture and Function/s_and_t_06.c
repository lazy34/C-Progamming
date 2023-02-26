                    //Passing Array of structure as argument

#include<stdio.h>
struct abc
{
    char x;
    int y;
};

void print(struct abc arr[])
{   int i;
    for ( i = 0; i < 2; i++)
    {
        printf("%c %d\n",arr[i].x,arr[i].y);
    }
    
}


int main ()
{
    struct abc arr[2]={{'A',2},{'B',3}};
    print(arr);

    return 0;

}