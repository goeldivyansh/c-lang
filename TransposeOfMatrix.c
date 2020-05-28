#include<stdio.h>
void main ()
{
    int a[2][3] = {{1,2,3}, {3,2,1}};
    int b[3][2];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            //printf("Value of %d%d element is %d\n",i,j,b[i][j]);
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

