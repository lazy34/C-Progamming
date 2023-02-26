/*
1
21
123
4321
12345
*/
#include<stdio.h>
void main()
//solution:1-->
/*{
    int i,j,k;
    for(i=0;i<=5;i++)
    {
        if(i%2!=0){
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for(k=i;k>=1;k--)
            {
                printf("%d ",k);
            }
        }
        printf("\n");
    
    }

}*/
//solution:2-->
{
    int c=0;
    int i,j,k;
    for(j=1;j<=5;j++)
    {
        if(j%2!=0)
        {
            for(i=1;i<=j;i++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }
        else{
            c=j;
            for(k=c;k>0;k--)
            {
                printf("%d ",k);
            }
            printf("\n");
        }
        
    }
}