#include<stdio.h>
void main()
{
    int i,x,j,n=5;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            x = n-i+j;
            printf("%d",x);
        }

        for(j=n-i;j>0;j--)
        {
            printf("%d",n);
        }
        printf("\n");
    }
}
