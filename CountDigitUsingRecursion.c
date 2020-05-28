#include<stdio.h>

int count(int n)
{
    static int c=1;
    if(n==0)
    {
        return 0;
    }
    else
    {
        count(n/10);
        return c++;
    }
}

void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("%d",count(n));
}
