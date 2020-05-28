#include<stdio.h>

int add(int a,int b)
{
    int sum = a+b;
    return sum;
}

void main()
{
    int x,y,Sum;
    scanf("%d",&x);
    scanf("%d",&y);
    Sum = add(x,y);
    printf("Sum of %d and %d is = %d",x,y,Sum);
}
