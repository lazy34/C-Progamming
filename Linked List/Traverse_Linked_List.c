#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;

};


                    //Counting And Printing the data of Nodes

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
    count_of_nodes(head);

    return 0;
}



