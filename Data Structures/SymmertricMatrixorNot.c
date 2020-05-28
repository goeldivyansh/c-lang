#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void main()
{
    int a[3][3] = {{1,2,3},{2,5,6},{3,6,9}};
    int i,j,n=3;
    bool s = true;

    printf("Matrix is : \n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           printf("%d  ",a[i][j]);
       }
       printf("\n");
    }

    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(a[i][j] != a[j][i])
           {
               s = false;
           }
       }
    }
    if(s)
        printf("Symmetric!! \"1\"");
    else
        printf("Not Symmetric!! \"0\"");

}


