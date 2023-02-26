#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;

};

                                //Creating A Simple Node
int main()
{
    struct node Head;
    //Head=malloc(sizeof(struct node));

    Head.data=18;
    Head.link=NULL;

    printf("%d",Head.data);
    printf("\n%d",sizeof(struct node)); //memory take multiple of 8, if it is 64 bit of computer 

    return 0;
}


                        //1st method to create a linked list
// int main()
// {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=1;
//     head->link=NULL;

//     struct node *current=malloc(sizeof(struct node));
//     current->data=2;
//     current->link=NULL;
//     head->link=current;

//     struct node *current2=malloc(sizeof(struct node));
//     current2->data=2;
//     current2->link=NULL;
//     current->link=current2;

//     printf("Linked List Created Successfully");

//     return 0;
// }

                        //2nd method to create a linked list

// int main()
// {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=1;
//     head->link=NULL;

//     struct node *current=malloc(sizeof(struct node));
//     current->data=2;
//     current->link=NULL;
//     head->link=current;

//     current=malloc(sizeof(struct node));
//     current->data=3;
//     current->link=NULL;

//     head->link->link=current;

//     printf("Linked List Created Successfully");
// }