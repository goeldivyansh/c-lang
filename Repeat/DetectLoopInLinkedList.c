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
    t6->next = t2;
    return head;
}


void main()
{
    node* head = NULL;
    head = create(head);

    node *t1 = head;
    node *t2 = head;

    while(t1->next != NULL)
    {
        t1 = t1->next;
        t2 = t2->next;
        t2 = t2->next;

        if(t1 == t2)
        {

            printf("loop detected at id = %d",t1->id);
            break;
        }
    }
/*


    if(head == NULL || head->next == NULL)
    {
        printf("\nNo loop");
        exit(0);
    }
    t2 = head->next;
    if(t2->next == NULL)
    {
        printf("\nNo loop");
        exit(0);
    }
    t2 = t2->next;

    while(t2->next != NULL)
    {
        while(t1->next != t2)
        {
            if(t1 == t2->next)
            {
                printf("Loop Detected");
                break;
            }
            t1 = t1->next;
        }
        t2 = t2->next;
        t1 = head;

        if(t2->next == NULL)
        {
            printf("No loop");
            exit(0);
        }
    }
        /*if(t2 == t1)
        {

        }
        else
        if(t2->next == t1)
        {

        }
        else
        if(t2 == t1->next)
        {

        }
        else
        if(t2->next == t1->next)
        {

        }
        */











}
