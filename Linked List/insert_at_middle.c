#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
  struct node* insert_at_first(struct node*nw,struct node *head)
  {
  	nw->next=head;
  	head=nw;
  	return head;
  }
  void insert_at_last(struct node*head,struct node*temp,struct node* nw)
  {
  	nw->next=NULL;
  	temp=head;
  	while(temp->next!=NULL)
  	{
  		temp=temp->next;
	  }
	  temp->next=nw;
  }
  struct node* insert()
  {
  	int choice;
  	struct node* nw,*head,*temp;
  	nw=(struct node*)malloc(sizeof(struct node));
  	if(nw=NULL)
  	{
  	printf("memory not available");	
  	exit(0);
	  }
	  else
	  {
	  	printf("enter the data u want to insert");
	  	scanf("%d",&nw->data);
	  	nw->next=NULL;
	  	if(head==NULL)
	  	{
	  		head=nw;
		  }
		  else
		  {
		  	("\n enter 1 for insert at first\n enter 2 for insert at last\n ");
		  	scanf("%d",&choice);
		  	switch(choice)
		  	{
		  		case 1:insert_at_first(nw,head);
		  		break;
		  		case 2:insert_at_last(head,temp,nw);
		  		break;
		  		default: printf("wrong choice");
			  }
		  }
	  }
	return head;
  }
  void main()
{
	insert();

}