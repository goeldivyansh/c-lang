#include<stdio.h>
#include<stdbool.h>

#define n 10
int a[n];
int top = -1;

void push(int x)
{
    top++;
    if(top == n)
    {
        printf("Stack overflows");
        return;
    }
    a[top] = x;
}

void pop()
{
    if(top == -1)
    {
        printf("No element to pop..");
        return;
    }
    top--;
}

int peep()
{
    printf("top : %d\n ",a[top]);
    return a[top];
}

bool isempty()
{
    if(top == -1)
        return true;
    else
        return false;
}

void print()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
}

void main()
{
    push(1);
    print();

    push(2);
    print();

    //isempty();

    push(3);
    print();

     push(4);
    print();

     push(5);
    print();

     push(6);
    print();

     push(7);
    print();

     push(8);
    print();

     push(9);
    print();

    push(10);
    print();

    push(9);
  //  print();

    pop();
    pop();
    print();

  /*  push(3);
    print();

    push(4);
    print();


    pop();
    print();

pop();
    print();

    peep();

    pop();
    print();

    peep();

    pop();
    print();

    peep();
    pop();*/



}
