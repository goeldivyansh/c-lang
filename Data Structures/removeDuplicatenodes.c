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

    t2->id = 1;
    t2->next = t3;

    t3->id = 2;
    t3->next = t4;

    t4->id = 4;
    t4->next = t5;

    t5->id = 1;
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
    node* head = NULL;
    head = create(head);
    printf("Given list is : ");
    print(head);

    //-----------------------------------------------------//

    node *t1, *t2, *temp;
    node *t = NULL;
    t1 = head;
    t2 = NULL;

    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    while(t1 != temp)
    {
        t2 = t1->next;
        while(t2 != NULL)
        {
            if(t1->id == t2->id)
            {
                t = head;
                while(t->next != t2)
                {
                    t = t->next;
                }
                t->next = t2->next;
            }
            t2 = t2->next;
        }
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        t1 = t1->next;
    }

    printf("\n\nNew list is : ");
    print(head);

}

