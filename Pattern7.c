#include<stdio.h>
void main()
{
    int i,j,k,n=10;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n)
            {
                printf("1 ");
            }
            else
            if(j==1 || j==n)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
