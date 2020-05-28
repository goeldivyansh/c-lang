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

    t1->id = 9;
    t1->next = t2;

    t2->id = 7;
    t2->next = t3;

    t3->id = 6;
    t3->next = t4;

    t4->id = 5;
    t4->next = t5;

    t5->id = 0;
    t5->next = NULL;
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

    t1->id = 10;
    t1->next = t2;

    t2->id = 8;
    t2->next = t3;

    t3->id = 5;
    t3->next = t4;

    t4->id = 5;
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
    node* head1 = NULL;
    head1 = create(head1);


    node* head2 = NULL;
    head2 = create2(head2);

    printf("First list is : ");
    print(head1);


    printf("\nSecond list is : ");
    print(head2);

    //-----------------------------------------------------//

    node *head3, *temp3, *temp4, *h1, *h2;

    head3 = NULL;
    h1 = head1;
    h2 = head2;

    while(h1 != NULL && h2 != NULL)
    {
        if(h1->id == h2->id)
        {
            temp3 = (node* )malloc(sizeof(node));
            temp3->id = h1->id;
            temp3->next = NULL;

            if(head3 == NULL)
            {
                head3 = temp3;
            }
            else
            {
                node *temp;
                temp = head3;
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = temp3;
            }

            temp4 = (node* )malloc(sizeof(node));
            temp4->id = h2->id;
            temp4->next = NULL;
            temp3->next = temp4;

            h1 = h1->next;
            h2 = h2->next;
        }
        else
        if(h1->id > h2->id)
        {
            temp3 = (node* )malloc(sizeof(node));
            temp3->id = h1->id;
            temp3->next = NULL;

            if(head3 == NULL)
            {
                head3 = temp3;
            }
            else
            {
                node *temp;
                temp = head3;
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = temp3;
            }
            h1 = h1->next;
        }
        else
        {
            temp3 = (node* )malloc(sizeof(node));
            temp3->id = h2->id;
            temp3->next = NULL;

            if(head3 == NULL)
            {
                head3 = temp3;
            }
            else
            {
                node *temp;
                temp = head3;
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = temp3;
            }
            h2 = h2->next;
        }
    }

    if(h1 != NULL)
    {
        while(h1 != NULL)
        {
            temp3 = (node* )malloc(sizeof(node));
            temp3->id = h1->id;
            temp3->next = NULL;

            node *temp;
            temp = head3;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = temp3;
            h1 = h1->next;
        }
    }
    else
    if(h2 != NULL)
    {
        while(h2 != NULL)
        {
            temp3 = (node* )malloc(sizeof(node));
            temp3->id = h2->id;
            temp3->next = NULL;

            node *temp;
            temp = head3;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = temp3;
            h2 = h2->next;
        }
    }

    printf("\n\nNew list is : ");
    print(head3);
}



