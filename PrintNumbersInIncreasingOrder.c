#include<stdio.h>

int inc(int n)
{
    if(n==0)
        {return 0;}
    else
    {
        inc(n-1);
        printf("%d ",n);
    }
}

void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    inc(n);
}
