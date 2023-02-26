#include<stdio.h>
int factorial(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }

    //recursive function
    return n*factorial(n-1);
}

int main()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);

    int ans;
    ans=factorial(n);
    printf("%d",ans);

    return 0;
}
