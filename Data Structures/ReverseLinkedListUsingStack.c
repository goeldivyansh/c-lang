#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct nodetype1
{
    int i;
    struct nodetype* nex;
} stack;
stack *top = NULL;

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
    return head;
}

void push(int x)
{
    stack* temp;
    temp = (stack* )malloc(sizeof(stack));
    temp->i = x;

    if(top == NULL)
    {
        top = temp;
        top->nex = NULL;
        return;
    }

    temp->nex = top;
    top = temp;
}

void pop()
{
    if(top == NULL)
    {
        printf("STACK UNDERFLOW..\n");
        return;
    }
    stack *t = top;
    top = top->nex;
    free(t);
}

void peep()
{
    printf("Top element is : %d \n",top->i);
    return;
}


void print()
{
    stack *t = top;

    if(top == NULL)
    {
        printf("STACK UNDERFLOW..\n");
        return;
    }
    while(t != NULL)
    {
        printf("%d  ",t->i);
        t = t->nex;
    }
    printf("\n");
}

void main()
{
    node *head = NULL;
    head = create(head);

    node *temp = head;

    while(temp != NULL)
    {
        push(temp->id);
        temp = temp->next;
    }
    print();
}
