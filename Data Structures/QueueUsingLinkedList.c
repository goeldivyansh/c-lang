#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    int id;
    struct nodetype *next;
}node;

node* front = NULL;
node* rear = NULL;

void Enqueue(int n)
{
    node* temp;
    temp = (node* )malloc(sizeof(node));
    temp->id = n;
    temp->next = NULL;

    if(front == NULL && rear == NULL)
    {
        front = temp;
        rear = temp;
    }
    /*else
    if(front == rear)
    {
        front->next = temp;
        rear = temp;
    }*/
    else
    {
        rear->next = temp;
        rear = temp;
    }

}
void Dequeue()
{
    if(front == NULL && rear == NULL)
    {
        printf("\nList is empty!!\n");
        return;
    }
    else
    if(front == rear)
    {
        printf("Dequeued element : %d",front->id);
        free(front);
        front = NULL;
        rear = NULL;
    }
    else
    {
        node *temp;
        temp = front;
        front = front->next;
        printf("Dequeued element : %d\n",temp->id);
        free(temp);
    }
}

void main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Enqueue(6);
      Enqueue(5);
      Dequeue();
      Dequeue();
      Dequeue();
}
