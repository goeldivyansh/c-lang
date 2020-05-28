#include<stdio.h>
void main()
{
    int i,j,k,sum=0;
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][2] = {{1,2},{3,4},{5,6}};
    int c[3][2];

    printf("First matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                sum = sum + a[i][k]*b[k][j];
                c[i][j] = sum;
            }
            sum = 0;
        }

    }

    printf("First matrix is : \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matrix is : \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of first and second matrix is : \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    /*printf("\nProduct matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }*/
}
