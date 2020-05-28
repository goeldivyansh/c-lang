#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct nodetype
{
    int id;
    struct nodetype* next;
}node;

node* create(node *head)
{
    node *t1, *t2, *t3, *t4, *t5;

    t1 = (node* )malloc(sizeof(node));
    t2 = (node* )malloc(sizeof(node));
    t3 = (node* )malloc(sizeof(node));
    t4 = (node* )malloc(sizeof(node));
    t5 = (node* )malloc(sizeof(node));

    head = t1;

    t1->id = 0;
    t1->next = t2;

    t2->id = 7;
    t2->next = t3;

    t3->id = 5;
    t3->next = t4;

    t4->id = 4;
    t4->next = t5;

    t5->id = 5;
    t5->next = NULL;
    return head;
}

void print(node *temp)
{
    while(temp != NULL)
    {
        printf("%d  ",temp->id);
        temp = temp->next;
    }
}

void main()
{
    node* head = NULL;
    head = create(head);  //To make list..
    printf("Given list is : ");
    print(head);  //To print the given list..

    //-----------------------------------------------------//

 /*   node *temp;
    node *t1;
    node *t2;
    node *odd = NULL;
    node *even = NULL;
    node *temp1 = NULL;
    node *temp2 = NULL;
    int x=1,y=1;

    temp = head;
    while(temp!=NULL)
    {
        if(temp->id%2 == 1)
        {
            t1= (node* )malloc(sizeof(node));
            t1->id = temp->id;
            t1->next = NULL;

            if(x==1)
            {
                temp1 = t1;
                odd = t1;
                x++;
            }
            else
            {
                temp1->next = t1;
                temp1 = t1;
            }
        }
        else
        {
            t2 = (node* )malloc(sizeof(node));
            t2->id = temp->id;
            t2->next = NULL;

            if(y==1)
            {
                temp2 = t2;
                even = t2;
                y++;
            }
            else
            {
                temp2->next = t2;
                temp2 = t2;
            }
        }
        temp = temp->next;
    }*/

    node *temp, *t;
    node *odd = NULL;
    node *even = NULL;
    t = NULL;

    temp = head;
    while(temp!=NULL)
    {
        if(temp->id%2 == 1)
        {
            node *t1;
            t1 = (node* )malloc(sizeof(node));
            t1->id = temp->id;
            t1->next = NULL;

            if(odd==NULL)
            {
                odd = t1;
            }
            else
            {
                t = odd;
                while(t->next != NULL)
                {
                    t = t->next;
                }
                t->next = t1;
            }
        }
        else
        {
            node *t2;
            t2 = (node* )malloc(sizeof(node));
            t2->id = temp->id;
            t2->next = NULL;

            if(even==NULL)
            {
                even = t2;
            }
            else
            {
                t = even;
                while(t->next != NULL)
                {
                    t = t->next;
                }
                t->next = t2;
            }
        }
        temp = temp->next;
    }

    printf("\n\nOdd list is : ");
    print(odd);

    printf("\nEven list is : ");
    print(even);
}

