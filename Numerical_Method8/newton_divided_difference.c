#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	float x[20],y[20][20],p,q,fx,sum;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	printf("Enter the values of x : \n");
	  for(i=0;i<n;i++){
	  	printf("x[%d]= ",i);
	  	scanf("%f",&x[i]);
	  }
	printf("Enter the corresponding value of y : \n");
	   for(i=0;i<n;i++){
	   	printf("y[%d]= ",i);
	   	scanf("%f",&y[i][0]);
	   }
	   printf("\t NEWTON'S DIVIDED DIFFERENCE TABLE: \n");
	      for(j=1;j<n;j++){
	      	for(i=0;i<n-j;i++){
	      		y[i][j]=(y[i+1][j-1]-y[i][j-1])/(x[i+j]-x[i]);
			  }
		  }
	 // DIVIDED DIFFERENCE TABLE:
	   for(i=0;i<n;i++){
	   	   printf("%.2f \t",x[i]);
	   	   for(j=0;j<n-i;j++){
	   	   	    printf("%.2f \t",y[i][j]);
		   }
		 printf("\n");  
	   }
	  printf("the value of x whose y is to be found : ");
	  scanf("%f",&fx);
	  // For Any Value of fx: 
	    sum=y[0][0];
		for(j=1;j<n;j++){
			p=1;
		  for(i=0;i<j;i++){
		  	p=p*(fx-x[i]);
		  }	
		  sum=sum + p*y[0][j];
		} 	  
	printf("The value of y is %.3f",sum);
	return 0;
}