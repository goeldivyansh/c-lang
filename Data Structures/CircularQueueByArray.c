#include<stdio.h>
#include<stdbool.h>

int a[5];
int n = 5;
int front = -1;
int rear = -1;


bool isEmpty()
{
    if(front == -1 && rear == -1)
        return true;
    else
        return false;
}

void Enqueue(int x)
{
    if((rear+1)%n == front)
    {
        printf("List is Full");
        return;
    }
    else
    if(isEmpty() == true)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear+1)%n;
    }
    a[rear] = x;
}

void Dequeue()
{
    if(isEmpty() == true)
    {
        printf("List is EMPTY!!");
        return ;
    }
    else
    if(front == rear)
    {
        printf("\nDequeued/Removed element is %d",a[front]);
        front = -1;
        rear = -1;

    }
    else
    {
        printf("\nDequeued/Removed element is %d",a[front]);
        front = (front+1)%n;
    }
}

void peek()
{
    printf("\nFirst element is %d\n",a[front]);
}

void print()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d  ",a[i]);
    }
}

void main()
{
    Enqueue(1);
    peek();
    Enqueue(2);
    //Dequeue();
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    print();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    //Dequeue();
 //   Enqueue(6);
   // print();
    //peek();
    //printf("f = %d",front);
    //printf("   r = %d\n\n",rear);
   // printf("f = %d",front);
   /*int i;
   for(i=0;i<n;i++)
   {
       printf("%d  ",a[i]);
   }*/
    //Enqueue(6);

    //printf("\n\nf = %d",front);
   // printf("   r = %d",rear);
   // Enqueue(6);

    printf("\nf = %d",front);
    printf("   r = %d",rear);
}
