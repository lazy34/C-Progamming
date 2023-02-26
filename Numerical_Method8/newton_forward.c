#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,n;
  float x[20], y[20][20];
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  
  printf("Enter the values of x: \n");
  for(i=0;i<n;i++) {
     printf("x[%d]=",i);
     scanf("%f",&x[i]);
  }
  printf("Enter the corresponding value of y: \n");
  for(i=0;i<n;i++){
  	 printf("y[%d]=",i);
     scanf("%f",&y[i][0]);	
  }
  /* CREATE FORWARD INTERPOLATION TABLE  */
  for(i=1;i<n;i++)
  {
  	for(j=0;j<n-i;j++)
  	{
  	y[j][i]=y[j+1][i-1]-y[j][i-1];	
    }
  }
  /* SHOW FORWARD INTERPOLATION TABLE  */
  printf("\t FORWARD INTERPOLATION TABLE:\n\n");
  for (i=0; i<n; i++)
  {
  	printf("%0.2f", x[i]);
  	for(j=0; j<n-i; j++)
  	{
  		printf("\t%0.2f",y[i][j]);
    }
    printf("\n");
  }
  float a;
  printf("Enter the values of x whose y is to be found:");
  scanf("%f",&a);
  int h=x[1]-x[0];
  float u=(a-x[0])/h;
  float sum=y[0][0],q;
  int p;
  p=q=1;
  for(j=1;j<n;j++)
  {
  	p=p*j;
  	q=q*(u+1-j);
  	sum=sum+q*y[0][j]/p;
  }
  printf("x= %.1f, y =%.4f",a,sum);
  getch();
  return 0;
}