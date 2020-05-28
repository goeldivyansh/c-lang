#include<stdio.h>
void main()
{
    int x,y,a,s,m,d;
    char o;

    printf("Enter the operand(+,-,*,/): ");
    scanf("%c", &o);

    printf("Enter first number : ");
    scanf("%d", &x);

    printf("Enter second number : ");
    scanf("%d", &y);

    a = x+y;
    s = x-y;
    m = x*y;
    d = x/y;

    switch(o)
    {
        case '+'  :  printf("%d + %d = %d",x,y,a);
        break;

        case '-'  :  printf("%d - %d = %d",x,y,s);
        break;

        case '*'  :  printf("%d * %d = %d",x,y,m);
        break;

        case '/'  :  printf("%d / %d = %d",x,y,d);
        break;

        default   :  printf("Wrong input entered");
    }


}
