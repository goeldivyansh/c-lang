#include<stdio.h>
void main()
{
    int i,j,n = 8,x;
    int a[8];

    printf("Enter 8 array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        x = a[i];

        for(j=i-1;j>=0;j--)
        {
            if(a[j]>x)
            {
                a[j+1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1] = x;
    }

    printf("\nSorted Array (Insertion sort) : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

}
