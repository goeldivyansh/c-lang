#include<stdio.h>
void main()
{
    int i,j,c;
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("Orignal matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            c = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = c;
        }
    }

    printf("\nTranspose of matrix is : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
