#include<stdio.h>
#include<stdlib.h>
#define size 5

int top=-1,st_array[size];
void push();
void pop();
void display();

int main()
{
    int choice;
    while(1)
    {
        printf("Operation by Stack\n");
        printf("Choose your Operation\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3:display();
            break;
            case4: exit(0); 

            default:printf("Invalid Choice\n");     

        }
    }
}

void push()
{
    if(top>size-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        int x;
        printf("Enter your element to push the stack\n");
        scanf("%d",&x);
        top++;
        st_array[top]=x;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\npop operation not possible\n");
    }
    else
    {
        printf("popped element is %d\n",st_array[top]);
        top--;
    }
}

void display()
{
    int i;
    printf("Stacks Elments are :\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",st_array[i]);
    }
}

