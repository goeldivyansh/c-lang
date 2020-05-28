#include<stdio.h>

void swipe(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j,n=3;

    printf("Matrix is : \n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           printf("%d  ",a[i][j]);
       }
       printf("\n");
    }

    printf("\nTranpose : \n");


    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n;j++)
       {
           if(j>i)
           {
               swipe(&a[i][j],&a[j][i]);
           }
       }
    }

    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           printf("%d  ",a[i][j]);
       }
       printf("\n");
    }

}
