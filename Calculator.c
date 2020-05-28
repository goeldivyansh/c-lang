#include<stdio.h>
void main()
{
    int a,b,c,n,i=0;
    char o;

    while(i == 0)
    {
    printf("Enter the operand(+,-) : ");
    scanf("%c",&o);

    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);

    switch(o)
    {
        case '+' : c = a+b;
                 printf("\nanswer is : %d",c);
        break;

        case '-' : c = a-b;
                 printf("\nanswer is : %d",c);
        break;

        default  : printf("\nWrong input.");
    }

    printf("\npress 1 to do one more calculation");
    printf("\npress 2 to exit");
    o = '/0';

    scanf("%d",&n);
    if(n==2)
    {
        break;
    }
    }

}
