#include<stdio.h>
#include<math.h>

void main()
{
    int a[3][2] = {{1,2},{3,4},{5,6}};
    int i,j,m=3,n=2;
    double sr=0,sc=0;

    printf("Matrix is : \n");
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
           printf("%d  ",a[i][j]);
       }
       printf("\n");
    }

    printf("\nSum of squares of reciprocal of each row : \n");

    for(i=0;i<m;i++)
    {
        sr=0;
        for(j=0;j<n;j++)
        {
            sr = sr + 1/pow(a[i][j],2);
        }
        printf("%d row : %f\n",i+1,sr);
    }

    printf("\nSum of squares of reciprocal of each column : \n");

    for(i=0;i<n;i++)
    {
        sc=0;
        for(j=0;j<m;j++)
        {
            sc = sc + 1/pow(a[j][i],2);
        }
        printf("%d column : %f\n",i+1,sc);
    }

}
