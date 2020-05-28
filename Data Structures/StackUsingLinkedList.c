#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct nodetype
{
    int id;
    struct nodetype* next;
} stack;

stack *top;

void createStack()
{
    top = NULL;
}

void push()
{
    int x;
    printf("Enter value : ");
    scanf("%d",&x);
    stack* temp;
    temp = (stack* )malloc(sizeof(stack));
    temp->id = x;

    if(top == NULL)
    {
        top = temp;
        top->next = NULL;
        return;
    }

    temp->next = top;
    top = temp;
}

void pop()
{
    if(top == NULL)
    {
        printf("STACK UNDERFLOW..\n");
        return;
    }
    stack *t = top;
    top = top->next;
    printf("Element is succefully popped\n");
    free(t);
}

/*void peep()
{
    printf("Top element is : %d \n",top->id);
    return;
}

bool isEmpty()
{
    if(top == NULL)
    {
        return true;
    }
    return false;
}*/

void print()
{
    stack *t = top;
    printf("Stack is : ");
    if(top == NULL)
    {
        printf("STACK UNDERFLOW..\n");
        return;
    }
    while(t != NULL)
    {
        printf("%d  ",t->id);
        t = t->next;
    }
    printf("\n");
}



void main()
{
    createStack();

    int choice;
    do
    {
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter the correct choice\n");
    }
    }while(choice!=4);
}
