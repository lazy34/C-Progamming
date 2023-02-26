#include<stdio.h>
int main()
{
    int i=0,j=0;
    int mat[3][3];

    printf("Input your values:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("your values are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",mat[i][j]);
        }
        printf("\n\n");
    }

    return 0;

}