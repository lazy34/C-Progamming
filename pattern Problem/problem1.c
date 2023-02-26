/*
1
123
12345
1234567
123456789
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(j=1;j<=9;j=j+2)
    {
        for(i=1;i<=j;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}