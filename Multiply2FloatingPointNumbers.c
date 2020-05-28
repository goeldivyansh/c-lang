#include<stdio.h>

float product(float a, float b)
{
    float p;
    p = a*b;
   // printf("%f",p);
    return p;
}

void main()
{
    float a,b,pr;
    scanf("%f %f",&a,&b);
    pr = product(a,b);
    printf("%f",pr);
}
