/*
problem-6->
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1

problem-7->
       1
     1 2 3
   1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/

//problem-6-solution>
#include<stdio.h>
void main()
/*{
    int i,j,c=5,k;
    for(k=0;k<=4;k++)
    {
        for(i=1;i<=k;i++)
        {
            printf("  ");
        }

        for(j=1;j<=c;j=j+1) 
        {
            printf("%d ",j);
        }
        c--;
        printf("\n");
    }
}*/ 
//problem-7-solution>
{
    int i,j,c=1,k;
    for(k=4;k>=0;k--)
    {
        for(i=1;i<=k;i++)
        {
            printf("  ");
        }

        for(j=1;j<=c;j=j+1) 
        {
            printf("%d ",j);
        }
        c=c+2;
        printf("\n");
    }
}
