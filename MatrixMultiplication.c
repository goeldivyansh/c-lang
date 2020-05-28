#include<stdio.h>
void main()
{
    int a[5][5], b[5][5], c[5][5];
    int i,j,k,sum=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter value of %d%d element of First matrix : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter value of %d%d element of Second matrix : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<5;k++)
            {
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j] = sum;
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
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
