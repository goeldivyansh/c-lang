#include<stdio.h>

int sum(int n)
{
    int a;
    if(n>0)
    {
        a = n + sum(n-1);
        return a;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);

    printf("Sum is %d ", sum(n));
}
