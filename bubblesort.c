#include<stdio.h>
void main()
{
    int a[5],n=5,i,c,j;

    printf("Enter 5 array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }

    printf("\nSorted Array (Bubble sort) : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
