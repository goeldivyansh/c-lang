#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct nodetype
{
    int id;
    struct nodetype *next;
} node;

node* create1()
{
    node *t1, *t2, *t3;

    t1 = (node* )malloc(sizeof(node));
    t2 = (node* )malloc(sizeof(node));
    t3 = (node* )malloc(sizeof(node));
    node* t4 = (node* )malloc(sizeof(node));
    //t5 = (node* )malloc(sizeof(node));

    t1->id = 9;
    t1->next = t2;

    t2->id = 9;
    t2->next = t3;

    t3->id = 9;
    t3->next = t4;

    t4->id = 9;
    t4->next = NULL;

    return t1;
}

node* create2()
{
    node *t1, *t2, *t3;

    t1 = (node* )malloc(sizeof(node));
    t2 = (node* )malloc(sizeof(node));
    t3 = (node* )malloc(sizeof(node));

    t1->id = 9;
    t1->next = t2;

    t2->id = 9;
    t2->next = t3;

    t3->id = 9;
    t3->next = NULL;
    return t1;
}

node* create(int s)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->id = s;
    temp->next = NULL;
    return temp;
}

node* insertAtEnd(node *head, int s)
{
    node *temp,*t;
    temp = create(s);
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        t = head;
        while(t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
    return head;
}

void main()
{
    node *head1 ,*head2, *head,*t1,*t2,*t;
    int s;

    head1 = create1();
    head2 = create2();
    head = NULL;

    t1 = head1;
    t2 = head2;

    while(t1 != NULL && t2 != NULL)
    {
        s = t1->id + t2->id;
        head = insertAtEnd(head,s);
        t1 = t1->next;
        t2 = t2->next;
    }

    while(t1 != NULL)
    {
        s = t1->id;
        head = insertAtEnd(head,s);
        t1 = t1->next;
    }

    while(t2 != NULL)
    {
        s = t2->id;
        head = insertAtEnd(head,s);
        t2 = t2->next;
    }

    t = head;
    while(t != NULL)
    {
        if(t->id>=10)
        {
            t->id = t->id%10;
            if(t->next == NULL)
            {
                t->next = create(1);
                break;
            }
            else
            {
                t->next->id = t->next->id + 1;
            }
        }
        t = t->next;
    }

    t = head1;
    printf("First no : ");
    while(t != NULL)
    {
        printf("%d  ",t->id);
        t = t->next;
    }

    t = head2;
    printf("\n\nSecond no : ");
    while(t != NULL)
    {
        printf("%d  ",t->id);
        t = t->next;
    }

    t = head;
    printf("\n\nSum is : ");
    while(t != NULL)
    {
        printf("%d  ",t->id);
        t = t->next;
    }
}
