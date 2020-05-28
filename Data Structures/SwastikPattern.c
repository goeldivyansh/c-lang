#include<stdio.h>
void main()
{
    int i,j,n=5;

    for(i=1;i<2*n;i++)
    {
        for(j=1;j<2*n;j++)
        {
            if(i<n)
            {
                if((i==1) && (j==1 || j >=n))
                {
                    printf("*");
                }
                else
                if(j==1 || j==n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            if(i==n)
            {
                printf("*");
            }
            else
            {
                if((i==2*n-1) && (j==2*n-1 || j<=n))
                {
                    printf("*");
                }
                else
                if(j==n || j==2*n-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
