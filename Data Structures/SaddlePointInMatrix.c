#include<stdio.h>
#include<stdbool.h>
void main()
{
    bool sp;
  //  int a[3][4] = {{1,2,3,4},{9,10,11,12},{5,6,7,8}};
    int a[3][4] = {{1,2,3,4},{12,11,10,9},{5,6,7,8}};
    int i,j,m=3,n=4,s=0,ind=0,k;

    printf("Matrix is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<m;i++)
    {
        sp = true;
        s = a[i][0];
        ind = 0;
        for(j=1;j<n;j++)
        {
            if(a[i][j] < s)
            {
                s = a[i][j];
                ind = j;
            }
        }

        for(k=0;k<m;k++)
        {
            if(s < a[k][ind])
            {
                sp = false;
                break;
            }
        }
        if(sp)
            printf("\nSaddle point at (%d,%d): %d",i,ind,s);
    }
}
