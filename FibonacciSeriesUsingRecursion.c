#include<stdio.h>

int fib(int n)
{
    int ans;
    if(n==1)
    {
        return 1;
    }
    else
    if(n==0)
    {
        return 0;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
void main()
{
    int n,i;
    printf("Enter number of terms : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
}
