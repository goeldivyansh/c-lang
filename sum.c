#include<stdio.h>
void main()
{

    int i,a,b,c,d,sum;
    printf("Enter any 4 digit number = " );
    scanf("%d",&i);
    a=i%10;

    i=i/10;
    b=i%10;

    i=i/10;
    c=i%10;

    i=i/10;
    d=i%10;

    sum = a+d;
    printf("the sum of first and last digit is = %d",sum );





}
