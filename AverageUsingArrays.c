#include<stdio.h>
void main()
{
    float a[] = {1,3,2,5,4,7,6,9,10,8};

    int i=0;
    float n=10,sum = 0,av;

    while(i<n)
    {
        sum = sum + a[i];
        i++;
    }

    av = sum/n;

    printf("%f %f",sum,av);
}
