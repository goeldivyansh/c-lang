#include<stdio.h>
void main()
{
    int n=3,m=4,i,j,k;
    int a[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
    int b[m][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nNew matrix is : \n");
   /* for(i=0;i<m;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }
    */
    for(i=0;i<m;i++)
    {
        for(j=n-1,k=0 ; j>=0,k<n ; j--,k++)
        {
            b[i][k] = a[j][i];

        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
}
