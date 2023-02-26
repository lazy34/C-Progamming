int main()
{
    struct node *Head=NULL;
    Head=(struct node*)malloc(sizeof(struct node));

    Head->data=18;
    Head->link=NULL;

    printf("%d",Head->data);
    printf("\n%d",sizeof(struct node)); //memory take multiple of 8, if it is 64 bit of computer 

    return 0;
}