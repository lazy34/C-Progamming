#include<stdio.h>
#include<math.h>

int pot(pow(2,n))
{
    if(n==0)
    {
        return 1;    
    }

    return 2*pot(pow(2,n-1));
}

int main()
{
    int base,n;
    printf("Enter Your Number\n");
    scanf("%d",&n);

    int ans=pot(pow(2,n));
    printf("%d",ans);

    return 0;


}