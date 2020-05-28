#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct nodetype
{
    int coeff;
    int power;
    struct nodetype *next;
}node;

node* insertPolynomial(node *poly)
{
    char c;
    do
    {
        node *temp, *t;
        temp = (node* )malloc(sizeof(node));

        printf("Enter the coefft : ");
        scanf("%d",&temp->coeff);

        printf("Enter the power of x : ");
        scanf("%d",&temp->power);

        temp->next = NULL;

        if(poly == NULL)
        {
            poly = temp;
        }
        else
        {
            t = poly;
            while(t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
        }
        printf("\nWant to insert another term? (y/n) ");
        scanf(" %c",&c);
    }while(c == 'y');
    return poly;
}








node* product(node *poly1, node *poly2)
{
    bool ispresent = false;
    int p;
    node *poly3, *temp3, *p1, *p2;
    node *temp;

    poly3 == NULL;
    p1 = poly1;
    p2 = poly2;

    while(p1 != NULL)
    {
        p2 = poly2;
        while(p2 != NULL)
        {
            ispresent = false;
            if(p1 == poly1)
            {
                temp3 = (node* )malloc(sizeof(node));
                temp3->coeff = p1->coeff * p2->coeff;
                temp3->power = p1->power + p2->power;
                temp3->next = NULL;

                if(poly3 == NULL)
                {
                    poly3 = temp3;
                }
                else
                {
                    temp = poly3;
                    while(temp->next != NULL)
                    {
                        temp = temp->next;
                    }
                    temp->next = temp3;
                }
            }
            else
            {
               p = p1->power + p2->power;
               temp = poly3;
               while(temp != NULL)
               {
                   if(p == temp->power)
                   {
                       temp->coeff = temp->coeff + p1->coeff*p2->coeff;
                       ispresent = true;
                       break;
                   }
                   temp = temp->next;
               }
               if(ispresent == false)
               {
                    temp3 = (node* )malloc(sizeof(node));
                    temp3->coeff = p1->coeff * p2->coeff;
                    temp3->power = p1->power + p2->power;
                    temp3->next = NULL;

                //    if(poly3 == NULL)
                  //  {
                    //    poly3 = temp3;
                    //}
                    //else
                    //{
                       // node *temp;
                        temp = poly3;
                        while(temp->next != NULL)
                        {
                            temp = temp->next;
                        }
                        temp->next = temp3;
                    //}
               }
            }
            p2 = p2->next;
        }
        p1 = p1->next;
    }
    return poly3;
}








void print(node *poly)
{
    node *temp;
    temp = poly;
    while(temp != NULL)
    {
        printf("%dx^%d",temp->coeff,temp->power);
        if(temp->next != NULL)
        {
            printf(" + ");
        }
        temp = temp->next;
    }
}

void main()
{
    node *poly1, *poly2, *poly3;
    poly1 = NULL;
    poly2 = NULL;
    poly3 = NULL;

    printf("Enter the First Polynomial : \n");
    poly1 = insertPolynomial(poly1);

    printf("\n\nEnter the second Polynomial : \n");
    poly2 = insertPolynomial(poly2);

    printf("\n\n\nFirst polynomial is : ");
    print(poly1);

    printf("\n\nSecond polynomial is : ");
    print(poly2);


    poly3 = product(poly1,poly2);

    printf("\n\nProduct of two polinomials : ");
    print(poly3);
}

