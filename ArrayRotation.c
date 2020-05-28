#include<stdio.h>
void main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n=10,x,i,j=0;

    printf("Enter the number at which u want to rotate array : ");
    scanf("%d",&x);

    int b[x];

    for(i=0;i<x;i++)
    {
        b[i] = a[i];
    }

    for(i=0;i<n-x;i++)
    {
        a[i] = a[i+x];
    }

    for(i=n-x;i<n;i++)
    {
        a[i] = b[j];
        j++;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
