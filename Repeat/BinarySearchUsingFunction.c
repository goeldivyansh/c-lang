#include<stdio.h>

int bSearch(int a[], int n, int x)
{
    int f = 0;
    int l = n-1;
    int m;

    while(f<=l)
    {
       m = (f+l)/2;
       if(x==a[m])
       {
           return m+1;
           break;
       }
       if(x>a[m])
       {
          f = m+1;
       }
       else
       {
          l = m-1;
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

    loc = bSearch(a,n,x);

    if(loc == -1)
    {
        printf("Element is not present!!");
    }
    else
    {
        printf("Element is Present & location is : %d",loc);
    }
}

