#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    char c;
    struct nodetype* next;
}node;

typedef struct nodetype1
{
    char s;
    struct nodetype* next1;
}stack;


stack* push(stack* top, char x)
{
    stack* temp;
    temp = (stack* )malloc(sizeof(stack));
    temp->s = x;

    if(top == NULL)
    {
        top = temp;
        top->next1 = NULL;
        return top;
    }

    temp->next1 = top;
    top = temp;
    return top;
}

stack* pop(stack* top)
{
    if(top == NULL)
    {
        return NULL;
    }
    stack *t = top;
    top = top->next1;
    free(t);

    return top;
}

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

    t1->c = 'a';
    t1->next = t2;

    t2->c = 'b';
    t2->next = t3;

    t3->c = 'c';
    t3->next = t4;

    t4->c = 'c';
    t4->next = t5;

    t5->c = 'b';
    t5->next = t6;

    t6->c = 'a';
    t6->next = NULL;
    return head;
}

char peep(stack* top)
{
    return top->s;
}

void print(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        printf("%c  ",temp->c);
        temp = temp->next;
    }
}

void main()
{
    node* head = NULL;
    head = create(head);
    printf("Given list is : ");
    print(head);

    stack* top = NULL;

    node *temp;
    temp = head;
    while(temp != NULL)
    {
        top = push(top,temp->c);
        temp = temp->next;
    }

    temp = head;

    while(temp != NULL)
    {
        if(temp->c != peep(top))
        {
            printf("Not a palindrome..");
            return;
        }
        top = pop(top);
        //peep(top);
        temp = temp->next;
    }

    printf("Palindrome");








}
