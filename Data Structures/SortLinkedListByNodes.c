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

    t1->id = 5;
    t1->next = t2;

    t2->id = 2;
    t2->next = t3;

    t3->id = 100;
    t3->next = t4;

    t4->id = 1;
    t4->next = t5;

    t5->id = 2;
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
    int i,count = 0;
    node* head = NULL;
    head = create(head);
    printf("Given list is : ");
    print(head);

    //-----------------------------------------------------//

    node *t1 = head;
    node *t2 = head;
    node *temp = head;
    node *t = NULL;
    node *tprev = head;

    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    for(i=0;i<count;i++)
    {
        t1 = head; t2 = head->next;

        while(t2 != NULL)
        {
            if(t1->id > t2->id)
            {
                if(t1 == head)
                {
                    t = t2;
                    t2 = t1;
                    t1 = t;
                    t2->next = t1->next;
                    t1->next = t2;
                    head = t1;
                }
                else
                {
                    tprev = head;
                    while(tprev->next != t1)
                    {
                        tprev = tprev->next;
                    }
                    t = t2;
                    t2 = t1;
                    t1 = t;
                    t2->next = t1->next;
                    t1->next = t2;
                    tprev->next = t1;
                }
            }
            t2 = t2->next;
            t1 = t1->next;
        }
    }
    printf("\n\nNew list is : ");
    print(head);



}

