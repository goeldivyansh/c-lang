#include<stdio.h>

int lSearch(int a[], int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            return i+1;
        }
    }
    return -1;
}

void main()
{
    int n,i,x;
    int loc = -1;

    printf("Enter the size of array = ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the elements of array = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the number x you have to search = ");
    scanf("%d",&x);

    loc = lSearch(a,n,x);

    if(loc == -1)
    {
        printf("Element is not present!!");
    }
    else
    {
        printf("Element is Present & location is : %d",loc);
    }
}


