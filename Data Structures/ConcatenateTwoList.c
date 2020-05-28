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
    node* head1 = NULL;
    head1 = create(head1);

    node *head2 = NULL;
    head2 = create(head2);

    printf("\nFirst list is : ");
    print(head1);

    printf("\nSecond list is : ");
    print(head2);

    //-----------------------------------------------------//

    node *temp = head1;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = head2;

    printf("\nConcatenated list is : ");
    print(head1);
}


