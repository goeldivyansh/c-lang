#include<stdio.h>
void main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;

    printf("value of i = %d",i);
    printf("\nvalue of j = %f",j);
    printf("\nvalue of k = %c",k);

    x=&i;
    y=&j;
    z=&k;

    printf("\n\nvalue of x = %u",x);
    printf("\nvalue of y = %u",y);
    printf("\nvalue of z = %u",z);

    x=x+3;
    y=y+5;
    z=z+7;

    printf("\n\nNew value of x = %u",x);
    printf("\nNew value of y = %u",y);
    printf("\nNew value of z = %u",z);
}
