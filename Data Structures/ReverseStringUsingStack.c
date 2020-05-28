#include<stdio.h>
#include<stdbool.h>

#define n 100
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
  //  printf("top : %d\n ",a[top]);
    return a[top];
}
/*
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
}*/

void main()
{
    char c[100];
    printf("Enter the string : ");
    gets(c);

    int i = 0;

    while(c[i] != '\0')
    {
        push(c[i]);
        i++;
    }

    i=0;

    while(c[i] != '\0')
    {
        c[i] = peep();
        pop();
        i++;
    }

    printf("\n\nNew string : ");
    puts(c);
}

