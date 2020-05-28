#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct nodetype
{
    int id;
    struct nodetype* next;
}node;

node* create1(node *head)
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

    t2->id = 3;
    t2->next = t3;

    t3->id = 4;
    t3->next = t4;

    t4->id = 5;
    t4->next = NULL;

    //t5->id = 07;
    //t5->next = NULL;
    return head;
}

node* create2(node *head)
{
    node *t1, *t2, *t3, *t4, *t5;

    t1 = (node* )malloc(sizeof(node));
    t2 = (node* )malloc(sizeof(node));
    t3 = (node* )malloc(sizeof(node));
    t4 = (node* )malloc(sizeof(node));
    t5 = (node* )malloc(sizeof(node));

    head = t1;

    t1->id = 2;
    t1->next = t2;

    t2->id = 4;
    t2->next = t3;

    t3->id = 6;
    t3->next = t4;

    t4->id = 8;
    t4->next = t5;

    t5->id = 9;
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
    head1 = create1(head1);


    node* head2 = NULL;
    head2 = create2(head2);

    printf("First list is : ");
    print(head1);


    printf("\nSecond list is : ");
    print(head2);

    node *head,*t1,*t2,*temp;

    if(head1->id <= head2->id)
    {
        head = head1;
    }
    else
    {
        head = head2;
    }

    printf("\nNew list is : ");
    print(head);



    t1 = head1;
    t2 = head2;
    temp = NULL;

    while(t1 != NULL && t2 != NULL)
    {
        if(t1->id <= t2->id)
        {
            while(t1->next->id <= t2->id && t1->next != NULL)
            {
                t1 = t1->next;
            }
            temp = t1;
            t1 = t1->next;
            temp->next = t2;
        }
        else
        {
            while(t2->next->id < t1->id && t2->next != NULL)
            {
                t2 = t2->next;
            }
            temp = t2;
            t2 = t2->next;
            temp->next = t1;
        }
    }

    printf("Final List is : ");
    print(head);
}
