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

int ascendingOrNot(node *head)
{
    bool isAsc = false;
    node *t1, *t2;
    t1 = head;
    t2 = head->next;


    if(t2 == NULL)
    {
        return 1;
    }
    else
    {
        while(t2 != NULL)
        {
            if(t1->id <= t2->id)
            {
                isAsc = true;
            }
            else
            {
                return 0;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        return 1;
    }
}

void main()
{
    node* head = NULL;
    head = create(head);
    printf("Given list is : ");
    print(head);

    //-----------------------------------------------------//

    printf("\n\nreturn : %d", ascendingOrNot(head));

}
