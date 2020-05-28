#include<stdio.h>

int sumOfDigits(int x)
{
    int sum = 0;
    while(x>0)
    {
        sum = sum + x%10;
        x = x/10;
    }
    return sum;
}
void main()
{
    int x,t;
    printf("Enter any number : ");
    scanf("%d",&x);
    t = x;
    while(t>9)
    {
        t = sumOfDigits(t);
    }
    printf("Sum : %d",t);
}
