#include<stdio.h>

typedef struct nodetype
{
    int id;
    struct nodetype* next;
}node;
node *head;

node* create()
{
    node *t1, *t2, *t3, *t4, *t5;

    t1 = (node* )malloc(sizeof(node));
    t2 = (node* )malloc(sizeof(node));
    t3 = (node* )malloc(sizeof(node));
    t4 = (node* )malloc(sizeof(node));
    t5 = (node* )malloc(sizeof(node));

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
    return t5;
}

void print()
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
    node *t,*temp;

    t = create();

    if(t->next == NULL)
    {
        t->id = NULL;
        //free(t);
    }
    else
    {
        temp = t->next;
        t->id = temp->id;
        t->next = temp->next;
        free(temp);
    }
    print();
}

