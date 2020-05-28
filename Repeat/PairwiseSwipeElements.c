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
    node *t1, *t2, *t3, *t4, *t5, *t6;

    t1 = (node* )malloc(sizeof(node));
    t2 = (node* )malloc(sizeof(node));
    t3 = (node* )malloc(sizeof(node));
    t4 = (node* )malloc(sizeof(node));
    t5 = (node* )malloc(sizeof(node));
   // t6 = (node* )malloc(sizeof(node));

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
    t5->next = NULL;

   // t6->id = 6;
    //t6->next = NULL;
    return head;
}

void print(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ",temp->id);
        temp = temp->next;
    }
}

void main()
{
    node* head = NULL;
    head = create(head);
    printf("Given list is : ");
    print(head);

    node *t = NULL;
    node *t1 = head;
    node *t2 = head->next;

    while(t1->next != NULL)
    {
        if(head == NULL || head->next == NULL)
        {
            break;
        }
        else
        {
            if(t1==head)
            {
                head = t2;
                t1->next = t2->next;
                t2->next = t1;
                t = t1;
            }
            else
            {
                t->next = t2;
                t1->next = t2->next;
                t2->next = t1;
                t=t1;
            }

            if(t1 == NULL || t1->next == NULL)
            {
                break;
            }
            t1 = t1->next;
            t2 = t2->next;
            t2 = t2->next;
            t2 = t2->next;
        }
    }

    printf("\n\nNew list is : ");
    print(head);
}
