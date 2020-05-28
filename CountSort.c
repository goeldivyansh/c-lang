#include<stdio.h>
void main()
{
    int a[] = {3,1,3,2,0,4,0,9,8,1,1,9};
    int count[10];
    int i,j,k,x;

    for(i=0;i<10;i++)
    {
        count[i] = 0;
    }

    for(i=0;i<12;i++)
    {
        x = a[i];
        count[x] = count[x] + 1;
    }

    for(j=0;j<10;j++)
    {
        for(k=1;k<=count[j];k++)
        {
            printf("%d ",j);
        }
    }
}

