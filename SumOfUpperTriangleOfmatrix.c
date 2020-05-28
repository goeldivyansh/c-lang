#include<stdio.h>
void main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    /*00 01 02
    10 11 12
    20 21 22*/
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<=j)
            {
                printf("%d ",a[i][j]);
                sum = sum + a[i][j];
            }
            else
            {
                a[i][j] = 0;
                printf("%d ",a[i][j]);
                sum = sum + a[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of upper triangle elements = %d",sum);
}
