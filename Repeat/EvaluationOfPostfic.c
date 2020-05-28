#include<stdio.h>

char c[20];
int stack[20];
int top = -1;
int n = 20;

void push(int x)
{
    top++;
    if(top == n)
    {
        printf("Stack overflows");
        return;
    }
    stack[top] = x;
}


int pop()
{
    if(top == -1)
    {
        printf("Not a valid expression entered");
        exit(0);
     //   return 0;
    }
    int p = stack[top];
    top--;
    return p;
}



void main()
{
    int i = 0;
    int a,b,r;

    printf("Enter the valid postfix expression : ");
    gets(c);
    printf("\n\nExpression is : ");
    puts(c);


    while(c[i] != '\0')
    {
        if(c[i] == '+')
        {
            a = pop();
            b = pop();
            r = b+a;
            push(r);
        }
        else
        if(c[i] == '-')
        {
            a = pop();
            b = pop();
            r = b-a;
            push(r);
        }
        else
        if(c[i] == '*')
        {
            a = pop();
            b = pop();
            r = b*a;
            push(r);
        }
        else
        if(c[i] == '/')
        {
            a = pop();
            b = pop();
            r = b/a;
            push(r);
        }
        else
        {
            push((int)(c[i]-'0'));
        }
        i++;
    }

    if(top != 0)
    {
        printf("Not a valid expression!!");
        exit(0);
    }

    printf("\n\nResult : %d",stack[top]);

}
