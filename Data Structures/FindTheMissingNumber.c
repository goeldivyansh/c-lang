#include<stdio.h>
void main()
{
    int n,sum = 0,i,x;
    n = 10;
    int a[] = {1,2,3,5,7,6,4,9,10};

    for(i=0;i<9;i++)
    {
        printf("%d  ",a[i]);
        sum = sum + a[i];
    }
    x = n*(n+1)/2 - sum;

    printf("\n\nMissing element : %d",x);
}
