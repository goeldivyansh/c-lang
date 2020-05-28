#include<stdio.h>
void main()
{
    int i,n,f=1;

    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
         f=f*i;
    }

    printf("Factorial of %d is : %d",n,f);
}
