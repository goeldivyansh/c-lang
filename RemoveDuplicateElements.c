#include<stdio.h>
void main()
{
    int i,j,k,n=10,x=9;
    int a[10] = {1,2,3,2,5,6,1,8,2,9};
                // 0,1,2,3,4,5,6,7,8,9
    for(i=0;i<x-1;i++)
    {
        for(j=i;j<x;j++)
        {
            if(a[i] == a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k] = a[k+1];
                }
               // a[x] = -1;
                x--;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }



}
