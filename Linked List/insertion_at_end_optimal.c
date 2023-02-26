#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}nd;




nd *add_at_end(nd *ptr,int data)
{
    nd *temp=(nd*)malloc(sizeof(nd));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
}


int main()
{
    nd *head=(nd*)malloc(sizeof(nd));
    head->data=1;
    head->link=NULL;

    nd *ptr=head;
    ptr=add_at_end(ptr,2);
    ptr=add_at_end(ptr,3);
    ptr=add_at_end(ptr,4);

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

    return 0;
}

                    //TIME COMPLEXITY =O(1);