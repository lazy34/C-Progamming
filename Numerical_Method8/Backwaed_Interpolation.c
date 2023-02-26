#include<stdio.h>
#include<conio.h>
int main()
{
	float x[20], y[20][20];
	int i,j,n;
	printf("Enter number 0f data: ");
	scanf("%d",&n);
	printf("Enter the values 0f x:\n");
	
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%f",&x[i]);
		printf("y[%d]=",i);
		scanf("%f",&y[i][0]);
	}
	// CREATE BACKWARD INTERPOLATION TABLE: 
	for(i=1;i<n;i++)
	{
		for(j=n-1;j>i-1;j--)
		{
			y[j][i]=y[j][i-1]-y[j-1][i-1];
		}
	}
	// SHOW BACKWARD INTERPOLATION TABLE:
	printf ("\t BACKWARD INTERPOLATION TABLE:\n\n");
	for(i=0;i<n;i++)
	{
		printf("%0.2f",x[i]);
		for(j=0;j<=i;j++)
		{
			printf("\t%0.2f",y[i][j]);
		}
		printf("\n");
	}
	float a;
  printf("Enter the values of x whose y is to be found:");
  scanf("%f",&a);
  int h=x[1]-x[0];
  float u=(a-x[n-1])/h;
  float sum=y[n-1][0],q;
  int p;
  p=q=1;
  for(j=1;j<n;j++)
  {
  	p=p*j;
  	q=q*(u-1+j);
  	sum=sum+q*y[n-1][j]/p;
  }
  printf("x=%f,y=%f",a,sum);
	getch();
	return 0;
}