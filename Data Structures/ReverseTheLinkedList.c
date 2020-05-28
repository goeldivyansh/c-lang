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
    node* head = NULL;
    head = create(head);
    printf("Given list is : ");
    print(head);

    //-----------------------------------------------------//

    node *hprev = head;
    node *hnext = head;
    node *t = head;
    int i;
//    for(i=0;i<3;i++)
    while(hnext != NULL)
    {
      //  printf("d\n");
        //printf("%d  ",head->id);
        hprev = head;
        if(t == head)
        {
            hprev->next = NULL;
        }
        head = head->next;
        hnext = head->next;
        head->next = hprev;

    }

    printf("\nNew list is : ");
    print(head);



}
