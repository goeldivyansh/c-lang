#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n=10,x,i,j,p;

    printf("Orignal array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEnter the number by which u want to rotate array : ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        p = a[0];
        for(j=0;j<n-1;j++)
        {
            a[j] = a[j+1];
        }
        a[n-1] =p;
    }

    printf("\nNew array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 1;
}
