#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;

};

void add_at_end(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));

    temp->data=data;
    temp->link=NULL;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }

    ptr->link=temp;

}

void count_of_nodes(struct node *head)
{
    int count=0;
    if(head==NULL)
    {
        printf("Linked List is empty");
    };
    struct node *ptr=NULL;
    ptr=head;
    printf("HEAD->");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        count++;
        ptr=ptr->link;
    }
    printf("NULL\n");
    printf("\n\ncount of Nodes=%d",count);
}



int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=2;
    current->link=NULL;
    head->link=current;

    struct node *current2=(struct node*)malloc(sizeof(struct node));
    current2->data=3;
    current2->link=NULL;
    current->link=current2;

    printf("Linked List Created Successfully\n\n");

    add_at_end(head,10);
    add_at_end(head,11);
    count_of_nodes(head);

    return 0;
}
