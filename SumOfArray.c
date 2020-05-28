#include<stdio.h>
void main()
{
    int a[4] = {2,67,43,5};
    int i,sum = 0;

    for(i=0;i<4;i++)
    {
        sum = sum + a[i];
    }
    printf("Sum is %d",sum);
}
