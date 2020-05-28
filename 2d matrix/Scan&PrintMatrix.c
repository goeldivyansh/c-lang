#include<stdio.h>
void main()
{
    int i,j;
    int a[2][3];

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter %d%d element : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix is : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
