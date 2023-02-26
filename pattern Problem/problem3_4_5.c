/*
problem-3->
AAAAB
AAABB
AABBB
ABBBB

problem-4->
    *
   **
  ***
 ****
*****
problem-5->
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 

*/
//problem-3-solution->
#include<stdio.h>
void main()
/*{
    int i,j,k;
    int c=1;
    for(k=4;k>=1;k--)
    {
        for(i=1;i<=k;i++)
        {
            printf("A");
        }

        for(i=1;i<=c;i++)
        {
            printf("B");
        }
        c++;
        printf("\n");
        
    }
} */

//problem-4,5-solution->
{
    int i,j,k;
    int c=1;
    for(k=5;k>=1;k--)
    {
        for(i=1;i<=k;i++)
        {
            printf(" ");
        }

        for(i=1;i<=c;i++)
        {
            //printf("*");//-->problem-4
            printf("* ");//-->problem-5
        }
        c++;
        printf("\n");
        
    }
}
