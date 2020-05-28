#include<stdio.h>
void main()
{
    int a[7] = {-3,4,-1,0,6,2,9};
 //   int a[] = {2,5,1,8,3};

    int n=7,i=0,j;
    int b[n];

    for(i=0;i<n;i++)
    {
        b[i] = 1;
    }
    printf("\n\nArray is : ");

    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                if((b[j]+1) > b[i])
                {
                    b[i] = b[j] + 1;
                }
            }
        }
    }

    printf("\n\nFreq of Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",b[i]);
    }
}
