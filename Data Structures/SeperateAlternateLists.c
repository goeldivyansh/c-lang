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
    node *t1,*t2, *t3, *t4, *t5, *t6;

    t1 = (node* )malloc(sizeof(node));
    t2 = (node* )malloc(sizeof(node));
    t3 = (node* )malloc(sizeof(node));
    t4 = (node* )malloc(sizeof(node));
    t5 = (node* )malloc(sizeof(node));
    t6 = (node* )malloc(sizeof(node));

    head = t1;

    t1->id = 1;
    t1->next = t2;

    t2->id = 2;
    t2->next = t3;

    t3->id = 3;
    t3->next = t4;

    t4->id = 4;
    t4->next = t5;

    t5->id = 5;
    t5->next = t6;

    t6->id = 6;
    t6->next = NULL;
    return head;
}

void print(node *temp)
{
    if(temp == NULL)
    {
        printf("EMPTY LIST!!!");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d  ",temp->id);
            temp = temp->next;
        }
    }
}

void main()
{
    node* head = NULL;
    head = create(head);  //To make list..
    printf("Given list is : ");
    print(head);  //To print the given list..

    //-----------------------------------------------------//

    bool a = true;
    node *temp = head;
    node *odd = NULL;
    node *even = NULL;
    node *t = NULL;

    while(temp!=NULL)
    {
        if(a)
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
            a = false;
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
            a = true;
        }
        temp = temp->next;
    }

    printf("\n\nOdd numbered list is : ");
    print(odd);

    printf("\nEven numbered list is : ");
    print(even);
}

