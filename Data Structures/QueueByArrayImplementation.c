#include<stdio.h>
#include<stdbool.h>

int a[5];
int n = 5;
int front = -1;
int rear = -1;

bool isFull()
{
    if(front == 0 && rear == n-1)
        return true;
    else
        return false;
}

bool isEmpty()
{
    if(front == -1 && rear == -1)
        return true;
    else
        return false;
}

void Enqueue(int x)
{
    if(front == 0 && rear == n-1)
    {
        printf("\nList is Full");
        return;
    }
    else
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        a[rear] = x;
    }
    else
    {
        rear++;
        a[rear] = x;
    }

}

void Dequeue()
{
    int i;
    if(front == -1 && rear == -1)
    {
        printf("\nList is EMPTY!!");
        return ;
    }
    else
    if(front == rear)
    {
        printf("\nDequeued/Removed element is %d",a[front]);
        for(i=0;i<rear;i++)
        {
            a[i] = a[i+1];
        }
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nDequeued/Removed element is %d",a[front]);
        for(i=0;i<rear;i++)
        {
            a[i] = a[i+1];
        }
        rear--;
    }
}

void peek()
{
    printf("\nFirst element is %d",a[front]);
}

void main()
{
    int i;
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);


    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
}
