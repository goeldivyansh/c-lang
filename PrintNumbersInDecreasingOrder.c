#include<stdio.h>

void dec(int n)
{
    if(n==0)
    return 0;

    printf("%d ",n);
    dec(n-1);
}

void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    dec(n);
}
