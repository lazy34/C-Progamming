#include <stdio.h>
#include <conio.h>
#include <math.h>

float func(float x)
{
    float y;
    y = 1 / (1 + (x * x));
    return y;
}

int main()
{
    int n;
    float a, b, h, sum = 0;

    float func(float x);
    printf("Enter the lower limit:\n");
    scanf("%f", &a);

    printf("Enter the upper limit:\n");
    scanf("%f", &b);

    printf("Enter the interval:\n");
    scanf("%d", &n);

    h = (b - a) / n;
    if (n % 6 == 0)
    {
        sum = sum + ((3 * h / 10) * (func(a + 2 * h) + 6 * func(a + 3 * h) + func(a + 4 * h) + 5 * func(a + 1 * h) + 5 * func(a + 5 * h) + func(a) + func(a + 6 * h)));
        printf("The value is: %f\n", sum);
    }
    else
    {
        printf("Weddle's cannot be use\n");
    }
    return 0;
}