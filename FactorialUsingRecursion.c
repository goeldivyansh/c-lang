#include<stdio.h>

int fact(int n)
{
    int f;
    if(n>0)
    {
        f = n*fact(n-1);
        return f;
    }
    else
    {
        return 1;
    }
}
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("\nFactorial is : %d",fact(n));
}

