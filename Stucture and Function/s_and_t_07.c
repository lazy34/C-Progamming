                    //Self Referential Structure

#include<stdio.h>

struct code{
    int i;
    char c;
    struct code *ptr;
};


int main()
{
    struct code var1;
    var1.i=65;
    var1.c='A';
    //var1.ptr=NULL;

    struct code var2;
    var2.i=66;
    var2.c='B';
   /// var2.ptr=2000;

    var1.ptr=&var2;
    printf("%d %c",var1.ptr->i,var1.ptr->c);
}