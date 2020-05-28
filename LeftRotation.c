#include<stdio.h>

//1 2 3 4 5

int main()
{
    int i,j,n,d;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter the number at which u want to rotate array : ");
    scanf("%d",&d);

    int a[n],b[n];

    printf("Enter values of array : ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=d;i<n;i++)
    {
        b[i-d] = a[i];
    }

    for(i=0;i<d;i++)
    {
        b[n-d+i] = a[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
