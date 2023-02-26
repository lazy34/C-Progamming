#include<stdio.h>
#include<conio.h>
#include<math.h>

float func(float x){
	float y;
	y=x*x*x-5*x-7;
	return y;
} 
int main()
{
	 float x0, x1, x2, f0, f1, f2, e;
	 int step = 1;
	 
	 float func(float x);
	 printf(" Enter a value: ");
	 scanf("%f",&x0);
	 
	 printf(" Enter b value: ");
	 scanf("%f",&x1);
	 
	 printf(" Enter tolerable error:\n ");
	 scanf("%f", &e);
	 
	 /* Calculating Functional Values */
	 f0 = func(x0);
	 f1 = func(x1);
	 
	 if( f0*f1 > 0.0) {
		  printf("Incorrect Initial Guesses.\n");
	 }
	 
	 /* Implementing Regula Falsi or False Position Method */
	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 
	 do
	 {
		  x2 = x0 - (x0-x1) * f0/(f0-f1);
		  f2 = func(x2);
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);
		
		  if(f0*f2 < 0) {
			   x1 = x2;
			   f1 = f2;
		  }
		  else {
			   x0 = x2;
			   f0 = f2;
		  }
		  step = step + 1;
	 }
	 while(fabs(f2)>e);
	 
	 printf("\nRoot is: %f", x2);
	 return 0; 
}