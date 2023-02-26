#include<stdio.h>
int a[100],n;
void insert(){
	
	int pos,ele,i;
	printf("\nspecify what position you insert an element\n");
	scanf("%d",&pos);
	printf("insert your element\n");
	scanf("%d",&ele);
	for(i=n-1;i>=pos;i--){
		a[i+1]=a[i];

	}
	a[pos]=ele;
	n++;
	printf("your elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}	
		
}
void del(){
	int pos,ele,i;
	printf("\nWhat do you want\nspecify what position you delete an element\n");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++){
		a[i]=a[i+1];
		

	}
	n--;
	printf("your elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	
}
void linear(){
	int el,i,found=0;
	printf("\nEnter the element you search");
	scanf("%d",&el);
	for(i=0;i<n;i++)
	{
		if(el==a[i])
		{
			found++;
			break;
		}
	}
	if(found==1)
		{
			printf("Element Found");
		}
		else{
			printf("Element Not Found");
		}
}
void sort(){
	int i,j,swap;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
	printf("Your sorted elements are:\n");
	for(i=0;i<n;i++)
	{
	printf(" %d",a[i]);
	}
	
}
void binary(){
	int i,mid,se,found=0,l,u;
	l=0;
	u=n-1;
	sort();
	printf("\nEnter the element you search\n");
	scanf("%d",&se);
	
	while(l<=u){
	mid=(l+u)/2;
	
	if(se==a[mid])
	{
		found++;
		break;
	}
	else if(se>a[mid])
	{
		l=mid+1;	
	}
	else{
		u=mid-1;
	}
}
	if(found==1)
		{
			printf("\nElement Found");
		}
		else{
			printf("Element Not Found");
		}
}

int main (){
	int i;
	printf("specify your array size\n");
	scanf("%d",&n);
	
	printf("Enter your elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("your elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}	
	
	int ops;
	printf("\n1.insert\n2.delete\n3.Linear Search\n4.Binary Search\n5.Sorting\n");
	scanf("%d",&ops);
	switch(ops)
	{
		case 1:insert();
			break;
		case 2:del();
			break;
		case 3:linear();
			break;
		case 4:binary();
			break;
		case 5:sort();
			break;
	}
	
	
	return 0;
}

























































































