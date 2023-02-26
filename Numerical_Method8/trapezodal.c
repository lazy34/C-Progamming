#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,n;
	float a,b,h,xi,x0,xn,sum;
	
	float func(float x);
	printf("Enter the lower limit: ");
	scanf("%f",&a);
	
	printf("Enter the upper limit: ");
	scanf("%f",&b);
	
	printf("Enter the interval: ");
	scanf("%d",&n);
	printf("\n");
	
	h=(b-a)/n;
	x0=a;
	xn=b;
	
	sum=func(x0)+func(xn);
	for(i=1;i<n;i++){ 
		xi=a+i*h;
		sum=sum+2*func(xi);
	}
	sum=(h/2)*sum;
	printf("The value is: %f\n",sum);
	
}
    float func(float x) {
    float y;
    y=exp(x);
    return y;
  }