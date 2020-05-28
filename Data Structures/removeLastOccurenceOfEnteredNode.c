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

    t3->id = 0;
    t3->next = t4;

    t4->id = 5;
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
    bool ispresent = false;
    node* head = NULL;
    head = create(head);
    printf("Given list is : ");
    print(head);

    //-----------------------------------------------------//

    int n;
    printf("\nEnter the number which you want to remove from the end of list : ");
    scanf("%d",&n);

    node *temp = head;

    while(temp != NULL)
    {
        if(temp->id == n)
        {
            ispresent = true;
            break;
        }
        temp = temp->next;
    }
    if(ispresent == false)
    {
        printf("\nEntered node is already not present...\n");
    }
    else
    {
        if(head == NULL)
        {
            printf("EMPTY LIST!!");
        }
        else
        if(head->next == NULL)
        {
            head == NULL;
        }
        else
        {
            node *t = NULL;
            temp = head;
            while(temp != NULL)
            {
                if(temp->id == n)
                {
                    t = temp;
                }
                temp = temp->next;
            }

            node *t1 = head;
            while(t1->next != t)
            {
                t1 = t1->next;
            }
            t1->next = t->next;
            free(t);
        }
    }

    printf("\nNew list is : ");
    print(head);
}
