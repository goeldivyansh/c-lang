#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter first number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    printf("Enter third number : ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
}
