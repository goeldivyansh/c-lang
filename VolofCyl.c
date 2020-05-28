#include<stdio.h>
void main()
{
    float r,h,vol;

    printf("Enter value of radius = ");
    scanf("%f",&r);

    printf("Enter value of height = ");
    scanf("%f",&h);

    vol = 22*r*r*h/7;

    printf("Volume of cylinder = %f",vol);
}
