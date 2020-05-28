#include<stdio.h>
//#include<string.h>

char expr[20];
char stack[20];
char res[20];
int top = -1;
int n = 20;

void push(char x)
{
    top++;
    if(top == n)
    {
        printf("Stack overflows");
        return;
    }
    stack[top] = x;
}


char pop()
{
    if(top == -1)
    {
        printf("Not a valid expression entered");
      //  exit(0);
        return 0;
    }
    char p = stack[top];
    top--;
    return p;
}

int Precedence(char p)
{
    if(p == '^')
    {
        return 3;
    }
    else
    if(p == '*' || p == '/')
    {
        return 2;
    }
    else
    if(p == '+' || p == '-')
    {
        return 1;
    }
    return -1;
}

void main()
{
    int i = 0,j = 0;

    printf("Enter the infix expression : ");
    gets(expr);
    printf("\nExpression is : ");
    puts(expr);

    while(expr[i] != '\0')
    {
        if((expr[i]>=48 && expr[i]<=57) || (expr[i]>=97 && expr[i]<=122) )
        {
            res[j] = expr[i];
            j++;
        }
        else
        if(expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/' || expr[i] == '^' )
        {
            if(top != -1)
            {
                while(stack[top] != '(' && Precedence(expr[i]) <= Precedence(stack[top]))
                {
                    res[j] = pop();
                    j++;
                }
            }
            push(expr[i]);
        }
        else
        if(expr[i] == '(')
        {
            push(expr[i]);
        }
        else
        if(expr[i] == ')')
        {
            while(stack[top] != '(' && Precedence(expr[i]) <= Precedence(stack[top]))
            {
                res[j] = pop();
                j++;
            }
            pop();
        }
        i++;
    }

    while(top != -1)
    {
        res[j] = pop();
        j++;
    }

    printf("\nPostfix expression is : ");
    puts(res);
}

