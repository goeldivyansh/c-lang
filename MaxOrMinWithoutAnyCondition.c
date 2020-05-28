#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a = 23 , b=-100;
    int max,min;

    max = (a+b + abs(a-b))/2;

    min = (a+b - abs(a-b))/2;

    printf("Max is %d \nMin is %d",max,min);


}
