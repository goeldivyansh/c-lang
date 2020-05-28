#include<stdio.h>
void main()
{
    int a[8];
    int n=8,i,j,max,x,ind=0;

    printf("Enter 8 array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];

    for(i=n;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            if(a[j]>max)
            {
                max = a[j];
                ind = j;
            }
        }
        x = a[ind];
        a[ind] = a[i-1];
        a[i-1] = x;
        max = a[0];
        ind = 0;
    }

    printf("\nSorted Array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
