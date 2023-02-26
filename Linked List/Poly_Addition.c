#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int coeff;
    int pow;
    struct node *next;
} my_poly;

void create_poly(my_poly **node)
{
    int choice, coeff, pow;
    my_poly *temp_node;
    temp_node = (my_poly *)malloc(sizeof(my_poly));
    *node = temp_node;
    do
    {
        printf("Enter coeff:\n");
        scanf("%d", &coeff);
        temp_node->coeff = coeff;
        printf("Enter the power:\n");
        scanf("%d", &pow);
        temp_node->pow = pow;
        temp_node->next = NULL;
        printf("\nContinue adding more terms to the polynomial expression?(yes=1/no=0)");
        scanf("%d", &choice);
        if (choice)
        {
            temp_node->next = (my_poly *)malloc(sizeof(my_poly));
            temp_node = temp_node->next;
            temp_node->next = NULL;
        }
    } while (choice);
}

void show_poly(my_poly *node)
{
    while (node != NULL)
    {
        printf("%dX^%d", node->coeff, node->pow);
        node = node->next;
        if (node != NULL)
        {
            printf("+");
        }
    }
}

void add_poly(my_poly ** result, my_poly * poly1, my_poly * poly2) {
    my_poly * tmp_node;
    tmp_node = (my_poly *) malloc(sizeof(my_poly));
    tmp_node->next = NULL;
    *result = tmp_node; 
    while(poly1 && poly2) {
        if (poly1->pow > poly2->pow) {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow) {
            tmp_node->pow = poly2->pow;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
 
    
        if(poly1 && poly2) {
            tmp_node->next = (my_poly *) malloc(sizeof(my_poly));
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    }
 
    while(poly1 || poly2) {
        tmp_node->next = (my_poly *) malloc(sizeof(my_poly));
        tmp_node = tmp_node->next;
        tmp_node->next = NULL;
 
        if(poly1) {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if(poly2) {
            tmp_node->pow = poly2->pow;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
    }
 
}

int main()
{
    int choice;
    do
    {
        my_poly *poly1, *poly2, *poly3;
        printf("Create the first polynomial expression:\n");
        create_poly(&poly1);
        printf("The 1st expression is:\n");
        show_poly(poly1);
        printf("\nCreate the second polynomial expression:\n");
        create_poly(&poly2);
        printf("\nThe 2nd expression is:\n");
        show_poly(poly2);
        printf("\nThe added expression is:\n");
        add_poly(&poly3, poly1, poly2);
        show_poly(poly3);
        printf("\nAddition complete.\n");
        printf("\nWanna add two more expoession?(yes=1/no=0)\n");
        scanf("%d",choice);
    } while (choice);
    return 0;
}